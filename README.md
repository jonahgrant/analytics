## Usage

```obj-c
- (void)viewDidLoad {
	[super viewDidLoad];
	
	SendPage(@"home");
	/*
	You can also use SendPageFromClass(self) to send a page view for the name of the class
	*/
}

- (IBAction *)buttonTapped:(id)sender {
	SendEvent(@"user_action", @"button_tapped");
}

- (void)performRequest {
	[self.networkingLibrary performRequestWithSuccessBlock:^ {
		NSLog(@"All's well");
	} errorBlock:^(NSError *error) {
		SendError(@"networking_error", error.localizedDescription);
	}];
}
```

### License
None, because this is eight lines of code.  Do whatever you want with it.
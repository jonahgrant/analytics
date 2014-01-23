## Usage

```obj-c
- (void)viewDidLoad {
	[super viewDidLoad];
	
	SendPage(NSStringFromClass[self class]);
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
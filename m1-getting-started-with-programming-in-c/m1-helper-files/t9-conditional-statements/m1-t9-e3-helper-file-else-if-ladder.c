	// Else-if Ladder Statement
		// Greater than equal to 100 and less than 500: 5% discount
		// Greater than equal to 500 and less than 750: 10% discount
		// Greater than equal to 750 and less than 1000: 15% discount
		// Greater than equal to 1000: 20% discount

	float retailPrice;
	puts("Enter retail price: ");
	scanf("%f", &retailPrice);

	float payableAmount;

	printf("Discount availed: Rs %.1f\n", retailPrice - payableAmount);
	printf("Net payable amount: Rs %.1f\n", payableAmount);

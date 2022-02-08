
	char* dt = ctime(&now);
	cout << "The local date and time is: " << dt << endl;
	return dt;
}

int main() {
	char* dt = data();
	file(dt);
	cout << "The local date and time is: " << endl;
	Mat mg = image();
	//my_mouse_callback();
	namedWindow("Кликанье мыши");
	setMouseCallback("Кликанье мыши", my_mouse_callback, &mg);
	while (true)
	{
		imshow("Кликанье мыши", mg);
		waitKey(30);
	}
	//waitKey(0);
	return 0;
}

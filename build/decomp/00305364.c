// OoT3D decomp @ 00305364  name=FUN_00305364  size=104

void FUN_00305364(int param_1)

{
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_002e667c();
    (**(code **)**(undefined4 **)(param_1 + 0xf0))();
    (**(code **)(**(int **)(param_1 + 4) + 0x10))
              (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  FUN_002f1328(param_1 + 8);
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00343280(param_1 + 0xf4,0xcc);
  return;
}

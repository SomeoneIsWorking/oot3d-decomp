// OoT3D decomp @ 0026f990  name=FUN_0026f990  size=76

void FUN_0026f990(int param_1)

{
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1fc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1fc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1fc),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1fc),0);
  }
  return;
}

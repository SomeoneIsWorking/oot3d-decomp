// OoT3D decomp @ 0020c5a4  name=FUN_0020c5a4  size=180

void FUN_0020c5a4(int param_1)

{
  short sVar1;
  int iVar2;

  sVar1 = *(short *)(param_1 + 0x1c);
  iVar2 = param_1 + 0x1a4;
  if (sVar1 == 0) {
    FUN_00357a50(iVar2,0,4,DAT_0020c658,0);
  }
  else if (sVar1 == 1) {
    FUN_00357a50(iVar2,0,3,DAT_0020c658 + 0x10,0);
  }
  else if (sVar1 == 2) {
    FUN_00357a50(iVar2,0,4,DAT_0020c658 + 0x20,0);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
  return;
}

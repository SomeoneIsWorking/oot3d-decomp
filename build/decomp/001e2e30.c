// OoT3D decomp @ 001e2e30  name=FUN_001e2e30  size=144

void FUN_001e2e30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  iVar3 = *(int *)(DAT_001e2ec0 + param_2);
  FUN_00375a18(iVar3 + 0xbe,(int)*(short *)(param_1 + 0x36),5,2000,0);
  iVar1 = DAT_001e2ec4;
  *(undefined2 *)(iVar3 + 0x36) = *(undefined2 *)(iVar3 + 0xbe);
  *(undefined2 *)(iVar1 + iVar3) = *(undefined2 *)(iVar3 + 0xbe);
  if (iVar2 == 2) {
    FUN_0037073c(param_2,0x2e);
    if (*(int *)(DAT_001e2ec8 + 4) != 0) {
      *(undefined1 *)(*(int *)(DAT_001e2ec8 + 4) + 0xa1c) = 1;
    }
    *(undefined2 *)(DAT_001e2ecc + param_1) = 0xf0;
    *(undefined4 *)(param_1 + 0x9ac) = DAT_001e2ed0;
  }
  return;
}

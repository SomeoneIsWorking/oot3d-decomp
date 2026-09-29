// OoT3D decomp @ 0024c844  name=FUN_0024c844  size=192

void FUN_0024c844(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;

  *(short *)(param_1 + 0x230) = *(short *)(param_1 + 0x230) + 1;
  iVar2 = 0;
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0xc0);
  do {
    iVar3 = param_1 + iVar2 * 2;
    iVar2 = iVar2 + 1;
    sVar1 = *(short *)(iVar3 + 0x234);
    if (sVar1 != 0) {
      *(short *)(iVar3 + 0x234) = sVar1 + -1;
    }
  } while (iVar2 < 4);
  FUN_0037322c(DAT_0024c904,param_1);
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_00376864(param_1);
  FUN_00376340(DAT_0024c90c,DAT_0024c90c,DAT_0024c908,param_2,param_1,0x1c);
  FUN_0037632c(param_1,param_1 + 0x254);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x254);
  return;
}

// OoT3D decomp @ 003e47cc  name=FUN_003e47cc  size=168

void FUN_003e47cc(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;

  uVar1 = DAT_003e4874;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x98) + 0xbcb7ffffU < uVar1) {
    *(undefined4 *)(param_1 + 0x140) = DAT_003e4878;
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_00373d40(param_1 + 0x1a4,0);
    uVar5 = DAT_003e4888;
    uVar4 = DAT_003e4884;
    uVar3 = DAT_003e4880;
    uVar2 = DAT_003e487c;
    iVar6 = 0;
    do {
      FUN_00368a98(uVar5,uVar4,uVar3,uVar2,param_2,param_1 + 0x28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 10);
    *(undefined4 *)(param_1 + 0x8ac) = DAT_003e488c;
  }
  return;
}

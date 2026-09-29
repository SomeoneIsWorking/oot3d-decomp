// OoT3D decomp @ 0041a1e0  name=FUN_0041a1e0  size=208

void FUN_0041a1e0(int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;

  puVar1 = DAT_0041a2b0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_003445a8();
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar4 = FUN_00307674();
      piVar7 = (int *)*puVar1;
      (**(code **)(*piVar7 + 0x10))(piVar7,uVar4);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  piVar7 = (int *)*puVar1;
  iVar5 = (**(code **)(*piVar7 + 8))(piVar7,0x54);
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = FUN_002ffa20();
  }
  *(int *)(param_1 + 0xc) = iVar6;
  if (iVar6 == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    uVar4 = FUN_00303ea8(*(undefined4 *)(param_1 + 4));
    FUN_002ff8e0(*(undefined4 *)(param_1 + 0xc),uVar4,0);
    uVar4 = DAT_0041a2b4;
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar2 = DAT_0041a2b8;
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar3 = DAT_0041a2bc;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined1 *)(param_1 + 9) = param_2;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

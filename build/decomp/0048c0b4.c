// OoT3D decomp @ 0048c0b4  name=FUN_0048c0b4  size=132

undefined4 FUN_0048c0b4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  iVar2 = FUN_003042d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if ((iVar2 != 0) && (iVar3 = FUN_0030429c(iVar2), iVar3 == 1)) {
    iVar2 = FUN_004958cc(iVar2);
    uVar4 = FUN_00495844();
    *param_3 = uVar4;
    param_3[5] = *(undefined4 *)(iVar2 + 8);
    uVar1 = FUN_00495864(iVar2);
    *(undefined1 *)(param_3 + 6) = uVar1;
    uVar1 = FUN_0049588c(iVar2);
    *(undefined1 *)((int)param_3 + 0x19) = uVar1;
    FUN_004957e8(iVar2,param_3 + 1);
    return 1;
  }
  return 0;
}

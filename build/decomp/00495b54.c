// OoT3D decomp @ 00495b54  name=FUN_00495b54  size=184

void FUN_00495b54(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  iVar2 = DAT_00495c0c;
  uVar4 = *(undefined4 *)(DAT_00495c0c + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x3d8);
  iVar3 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar3 != 0) {
    FUN_00359aa0(param_1 + 0x254,param_2,uVar4);
  }
  if ((*(short *)(param_1 + 0x2238) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x2238) + -1, *(short *)(param_1 + 0x2238) = sVar1, sVar1 != 0))
  {
    return;
  }
  iVar3 = FUN_003518dc(param_1,param_2);
  if (iVar3 == 0) {
    FUN_0033f7ac(param_1,*(undefined4 *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x3f0),
                 param_2);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
  FUN_0036c5bc(param_2,0);
  FUN_0036ae48();
  return;
}

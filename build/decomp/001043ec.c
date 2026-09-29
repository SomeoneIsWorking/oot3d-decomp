// OoT3D decomp @ 001043ec  name=FUN_001043ec  size=120

void FUN_001043ec(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar4 == 5) && (iVar4 = FUN_00346964(param_2), iVar4 != 0)) {
    FUN_003725e0(param_2);
    uVar3 = DAT_00104470;
    uVar2 = DAT_0010446c;
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xfffd;
    uVar1 = DAT_00104468;
    *(undefined4 *)(param_1 + 0xbac) = DAT_00104464;
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
    FUN_003724dc(uVar3,uVar2,param_1,param_2,0x14);
    return;
  }
  return;
}

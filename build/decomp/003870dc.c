// OoT3D decomp @ 003870dc  name=FUN_003870dc  size=184

void FUN_003870dc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_00387198,DAT_00387194,DAT_00387194,param_2,param_1,4);
  FUN_00330370(param_1);
  iVar2 = FUN_0037571c(param_2);
  uVar1 = DAT_0038719c;
  bVar5 = iVar2 != 0;
  puVar3 = (ushort *)0x0;
  if (bVar5) {
    puVar3 = *(ushort **)(param_2 + 0x22ec);
  }
  bVar6 = puVar3 != (ushort *)0x0;
  if (bVar5 && bVar6) {
    puVar3 = (ushort *)(uint)*puVar3;
  }
  if ((bVar5 && bVar6) && puVar3 != (ushort *)&DAT_00000006) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,0x12);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003871a0,uVar1,uVar4,uVar1,param_1 + 0x1a4,0x12,0);
    *(undefined4 *)(param_1 + 3000) = 0x4f;
    *(undefined4 *)(param_1 + 0xbbc) = 1;
    *(undefined4 *)(param_1 + 0xc70) = 1;
  }
  return;
}

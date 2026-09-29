// OoT3D decomp @ 001902c0  name=FUN_001902c0  size=424

void FUN_001902c0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_003510b0(param_1,DAT_00190468);
  FUN_00375c10(param_2,0x14);
  FUN_0037572c(DAT_0019046c,param_1);
  uVar3 = DAT_00190474;
  *(undefined4 *)(param_1 + 0x70) = DAT_00190470;
  FUN_00372d4c(DAT_00190478,uVar3,param_1 + 0xbc,0);
  *(undefined4 *)(param_1 + 0x6c) = DAT_0019047c;
  fVar1 = DAT_00190480;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00190484 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = iVar2 + 0x10;
  uVar3 = ObjectBankArchive_00358ef8(iVar2,0);
  FUN_00358ea8(iVar2,param_2,param_1 + 0x26c,uVar3,*(undefined4 *)(param_1 + 0x178),1,
               param_1 + 0x2f4,param_1 + 0x808,0x19);
  *(undefined4 *)(param_1 + 0xd24) = 0xffffffff;
  if (*(short *)(param_1 + 0x1c) < 10) {
    FUN_003490e0(param_1 + 0x26c,DAT_00190488);
    uVar3 = DAT_00190490;
    *(undefined4 *)(param_1 + 0x254) = DAT_0019048c;
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    *(undefined4 *)(param_1 + 0x2c) = DAT_00190494;
    *(undefined4 *)(param_1 + 0x30) = DAT_00190498;
  }
  else {
    FUN_00362ab4(param_1,param_2,(int)(short)(*(short *)(param_1 + 0x1c) + -10));
  }
  if (((*DAT_0019049c & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0019049c), iVar4 != 0)) {
    FUN_0036788c(DAT_001904a0);
  }
  uVar3 = ObjectBankArchive_00372c90(iVar2,*(undefined4 *)(DAT_001904ac + 0xf3c));
  *(undefined4 *)(param_1 + 0xd28) = uVar3;
  return;
}

// OoT3D decomp @ 00229368  name=FUN_00229368  size=476

void FUN_00229368(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;

  FUN_003510b0(param_1,DAT_002295ac);
  uVar5 = DAT_002295cc;
  puVar2 = DAT_002295b4;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_002295b0 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  iVar3 = iVar3 + 0x10;
  if (*(short *)(param_1 + 0x1c) != 10) {
    FUN_00372d4c(DAT_002295cc,DAT_002295c4,param_1 + 0xbc,DAT_002295c8);
    *(undefined4 *)(param_1 + 0x69c) = 0;
    uVar6 = ObjectBankArchive_00358ef8(iVar3,0);
    iVar4 = DAT_002295d0;
    FUN_00358ea8(iVar3,param_2,param_1 + 0x208,uVar6,*(undefined4 *)(param_1 + 0x178),
                 *(undefined4 *)(DAT_002295d0 + 0x1c),param_1 + 0x28c,param_1 + 0x494,10);
    FUN_00353dd0(param_2,param_1 + 0x1b0);
    FUN_00353d24(param_2,param_1 + 0x1b0,param_1,iVar4 + 0x34);
    FUN_00350d20(param_1 + 0xa0,iVar4 + 0x6c,iVar4 + 0x2c);
    uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18;
    *(ushort *)(param_1 + 0x1ae) = *(ushort *)(param_1 + 0x1c) >> 8;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
    if (uVar1 == 0xff || uVar1 == 0) {
      *(undefined2 *)(param_1 + 0x1ae) = 1;
    }
    FUN_0037422c(uVar5,param_1 + 0x208,*(undefined4 *)(iVar4 + 0x18));
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(100,0x32);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
  if (((*puVar2 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002295b4), iVar4 != 0)) {
    FUN_0036788c(DAT_002295b8);
  }
  piVar7 = *(int **)(DAT_002295b8 + 0x17c);
  piVar7[2] = *(int *)(param_1 + 0x178);
  uVar5 = ObjectBankArchive_00358ef8(iVar3,2);
  uVar5 = (**(code **)(*piVar7 + 8))(piVar7,uVar5,1);
  *(undefined4 *)(param_1 + 0x69c) = uVar5;
  piVar7[2] = 0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  return;
}

// OoT3D decomp @ 003ea048  name=FUN_003ea048  size=752

void FUN_003ea048(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  uVar8 = DAT_003ea370;
  iVar5 = FUN_003736fc(DAT_003ea370,DAT_003ea370,param_1 + 0x1a4);
  uVar2 = DAT_003ea378;
  uVar1 = DAT_003ea374;
  if ((((iVar5 != 0) || (iVar5 = FUN_003736fc(DAT_003ea374,uVar8,param_1 + 0x1a4), iVar5 != 0)) ||
      (iVar5 = FUN_003736fc(uVar2,uVar8,param_1 + 0x1a4), iVar5 != 0)) ||
     (iVar5 = FUN_003736fc(DAT_003ea37c,uVar8,param_1 + 0x1a4), iVar5 != 0)) {
    *(undefined2 *)(param_1 + 0x252) = 1;
  }
  iVar5 = FUN_003736fc(uVar2,uVar8,param_1 + 0x1a4);
  if (iVar5 == 0) {
    iVar5 = FUN_003736fc(uVar1,uVar8,param_1 + 0x1a4);
    if (iVar5 != 0) {
      FUN_0036fcfc(param_1,param_2,2,3);
    }
  }
  else {
    FUN_0036fcfc(param_1,param_2,1,3);
  }
  if ((*(ushort *)(param_1 + 0x230) & 0x3f) == 0) {
    FUN_00375bcc(param_1,DAT_003ea380);
  }
  uVar2 = DAT_003ea388;
  uVar1 = DAT_003ea384;
  if (*(short *)(param_1 + 0x252) == 0) {
    iVar5 = FUN_0036e800(param_1,*(undefined4 *)(DAT_003ea38c + param_2));
    uVar3 = DAT_003ea394;
    uVar7 = DAT_003ea390;
    if (*(short *)(param_1 + 0x232) == 0) {
      if (*(short *)(param_1 + 0x270) == 0) {
        FUN_00373500(DAT_003ea3ac,DAT_003ea394,DAT_003ea390,param_1 + 0x6c);
        *(undefined4 *)(param_1 + 0x1e4) = uVar7;
        iVar5 = (int)(short)((short)iVar5 + -0x8000);
      }
      else {
        FUN_00373500(uVar1,DAT_003ea394,DAT_003ea390,param_1 + 0x6c);
        *(undefined4 *)(param_1 + 0x1e4) = DAT_003ea3a8;
        if (*(short *)(param_1 + 0x270) == 1) {
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
        }
      }
      FUN_00370084(param_1 + 0x36,iVar5,3,DAT_003ea3b0);
    }
    else {
      *(short *)(param_1 + 0x232) = *(short *)(param_1 + 0x232) + -1;
      if (*(int *)(param_1 + 0x98) < DAT_003ea398) {
        uVar6 = FUN_0036ae14(param_1 + 0x1a4,10);
        uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar8,uVar2,uVar6,uVar1,param_1 + 0x1a4,10,2);
        uVar4 = DAT_003ea3a0;
        uVar6 = DAT_003ea39c;
        *(undefined4 *)(param_1 + 0x1050) = DAT_003ea39c;
        *(undefined4 *)(param_1 + 0x1054) = uVar6;
        *(undefined4 *)(param_1 + 0x22c) = uVar4;
      }
      FUN_00373500(DAT_003ea3a4,uVar3,uVar7,param_1 + 0x6c);
      FUN_00370084(param_1 + 0x36,iVar5,5,1000);
    }
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined4 *)(param_1 + 100) = uVar2;
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    uVar7 = FUN_0036ae14(param_1 + 0x1a4,7);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar8,uVar2,uVar7,uVar1,param_1 + 0x1a4,7,0);
    uVar1 = DAT_003ea3b8;
    uVar8 = DAT_003ea3b4;
    *(undefined4 *)(param_1 + 0x1050) = DAT_003ea3b4;
    *(undefined4 *)(param_1 + 0x1054) = uVar8;
    *(undefined4 *)(param_1 + 0x22c) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
  }
  if ((*(short *)(param_1 + 0x26e) == 0) && (*(short *)(param_1 + 0x232) != 0)) {
    uVar8 = FUN_0036ae14(param_1 + 0x1a4,0x11);
    VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(uVar8,0x14,0x1e);
  }
  return;
}

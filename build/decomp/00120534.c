// OoT3D decomp @ 00120534  name=FUN_00120534  size=720

void FUN_00120534(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;

  FUN_003731e0(param_1 + 0x5c0);
  uVar2 = DAT_0012080c;
  uVar1 = DAT_00120808;
  uVar7 = DAT_00120804;
  if ((*(ushort *)(param_1 + 0x1a8) & 3) == 0) {
    local_3c = (float)FUN_003738a8(DAT_0012080c);
    local_3c = local_3c + *(float *)(param_1 + 0x28);
    local_38 = (float)FUN_003738a8(uVar2);
    local_38 = local_38 + *(float *)(param_1 + 0x2c);
    local_34 = (float)FUN_003738a8(uVar2);
    local_34 = local_34 + *(float *)(param_1 + 0x30);
    local_48 = uVar1;
    local_44 = uVar1;
    local_40 = uVar1;
    local_54 = uVar1;
    local_50 = uVar7;
    local_4c = uVar1;
    fVar9 = (float)FUN_00371e50(DAT_00120810);
    FUN_00367f34(fVar9 + DAT_00120814,param_2,(int)(short)(*(short *)(param_1 + 0x1c) + 2),&local_3c
                 ,&local_48,&local_54,0,0,0x96);
  }
  uVar6 = DAT_0012082c;
  fVar9 = DAT_00120828;
  uVar5 = DAT_00120824;
  uVar4 = DAT_00120820;
  uVar3 = DAT_0012081c;
  uVar2 = DAT_00120818;
  if (*(short *)(param_1 + 0x1c) == 1) {
    FUN_00373500(DAT_0012081c,DAT_0012082c,DAT_00120818,param_1 + 0x22c);
    FUN_00373500(uVar3,uVar6,uVar2,param_1 + 0x230);
    FUN_00373500(uVar3,uVar6,uVar2,param_1 + 0x234);
    FUN_00373500(uVar4,uVar6,uVar2,param_1 + 0x238);
    FUN_00373500(uVar5,uVar6,uVar2,param_1 + 0x23c);
  }
  else if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_00373500(DAT_0012081c,DAT_0012082c,DAT_00120818,param_1 + 0x22c);
    FUN_00373500(fVar9,uVar6,uVar2,param_1 + 0x230);
    FUN_00373500(uVar1,uVar6,uVar2,param_1 + 0x234);
    FUN_00373500(uVar4,uVar6,uVar2,param_1 + 0x238);
    FUN_00373500(uVar5,uVar6,uVar2,param_1 + 0x23c);
  }
  fVar10 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1a8) * (short)DAT_00120830));
  FUN_00373500(DAT_00120838 + fVar10 * DAT_00120834 + fVar9,uVar7,*(undefined4 *)(param_1 + 0x6c),
               param_1 + 0x2c);
  FUN_00373500(DAT_0012083c,uVar6,uVar6,param_1 + 0x6c);
  uVar7 = DAT_00120840;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar9;
  FUN_00376340(fVar9,fVar9,uVar7,param_2,param_1,4);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar9;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
  }
  if (*(short *)(param_1 + 0x1d0) == 1) {
    FUN_00374a58(uVar1,param_1 + 0x5c0,4);
    uVar7 = FUN_0036ae14(param_1 + 0x5c0,4);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1fc) = uVar7;
  }
  if ((*(short *)(param_1 + 0x1d0) == 0) &&
     (iVar8 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar6,param_1 + 0x5c0), iVar8 != 0)) {
    FUN_0036e3a8(param_1,param_2);
    return;
  }
  return;
}

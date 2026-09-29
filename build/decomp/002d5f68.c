// OoT3D decomp @ 002d5f68  name=FUN_002d5f68  size=1212

void FUN_002d5f68(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  int unaff_r6;
  undefined4 uVar5;
  uint in_fpscr;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;

  uVar5 = *(undefined4 *)(param_2 + 0x178);
  if ((*(uint *)(param_2 + 4) & 0x20000000) == 0) {
    unaff_r6 = FUN_0035bfb4(param_1 + 0x29c,*param_1);
    if ((*(uint *)(param_2 + 4) & 0x400000) == 0) {
      FUN_0035bf50(unaff_r6,param_1[0x29c],param_2 + 0x28);
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(unaff_r6 + 8),(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = VectorFloatToUnsigned(fVar8 * (float)param_1[0xc87],3);
      *(char *)(unaff_r6 + 8) = (char)uVar6;
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(unaff_r6 + 9),(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = VectorFloatToUnsigned(fVar8 * (float)param_1[0xc87],3);
      *(char *)(unaff_r6 + 9) = (char)uVar6;
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(unaff_r6 + 10),(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = VectorFloatToUnsigned(fVar8 * (float)param_1[0xc87],3);
      *(char *)(unaff_r6 + 10) = (char)uVar6;
      FUN_0035bbe0(unaff_r6,uVar5);
    }
    else {
      FUN_0035bf50(unaff_r6,param_1[0x29c],0);
      FUN_00340f44(unaff_r6,uVar5);
    }
  }
  if ((*(uint *)(param_2 + 4) & 0x1000) == 0) {
    FUN_003679d0(*(undefined4 *)(param_2 + 0x28),
                 *(float *)(param_2 + 0x2c) +
                 *(float *)(param_2 + 0xc4) * *(float *)(param_2 + 0x58),
                 *(undefined4 *)(param_2 + 0x30),param_2 + 0x148,param_2 + 0xbc);
  }
  else {
    FUN_003679d0(*(float *)(param_2 + 0x28) + (float)param_1[0x105],
                 *(float *)(param_2 + 0x2c) + (float)param_1[0x106] +
                 *(float *)(param_2 + 0xc4) * *(float *)(param_2 + 0x58),
                 *(float *)(param_2 + 0x30) + (float)param_1[0x107],param_2 + 0x148,param_2 + 0xbc);
  }
  local_50 = *(undefined4 *)(param_2 + 0x54);
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = *(undefined4 *)(param_2 + 0x58);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = *(float *)(param_2 + 0x5c);
  local_24 = 0.0;
  FUN_0036c174(param_2 + 0x148,param_2 + 0x148,&local_50);
  if ((*(uint *)(param_2 + 4) & 0x40000000) == 0) {
    FUN_0036879c();
    FUN_00368704(*(undefined4 *)(DAT_002d6424 + (int)param_1),*(undefined4 *)(param_2 + 0x178));
  }
  else {
    FUN_0034e988(*(undefined4 *)(param_2 + 0x178));
  }
  fVar8 = DAT_002d6428;
  if (*(short *)(param_2 + 0x11a) == 0) {
    FUN_00341c18(*(undefined4 *)(param_2 + 0x178),5);
    goto LAB_002d6254;
  }
  local_30 = *DAT_002d642c;
  local_2c = DAT_002d642c[1];
  local_28 = DAT_002d642c[2];
  local_24 = DAT_002d642c[3];
  uVar4 = *(uint *)(param_2 + 0x11c) & 0xffff;
  uVar2 = (uint)*(ushort *)(param_2 + 0x11a);
  if (uVar4 < *(ushort *)(param_2 + 0x11a)) {
    uVar2 = uVar4;
  }
  uVar1 = FUN_00368d94(uVar2 << 0xe);
  fVar7 = (float)FUN_00338f68(uVar1);
  fVar7 = (fVar8 - fVar7) * DAT_002d6430;
  local_24 = fVar8 - fVar7;
  uVar2 = *(uint *)(param_2 + 0x11c);
  if ((uVar2 & 0x800000) == 0) {
    fVar9 = (float)VectorUnsignedToFloat((uVar2 & 0x1f0000) >> 0xd | 7,(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar7 = fVar9 * DAT_002d6434 * fVar7;
    if ((uVar2 & 0x400000) != 0) goto LAB_002d6208;
  }
  else {
    fVar9 = (float)VectorUnsignedToFloat((uVar2 & 0x1f0000) >> 0xd | 7,(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar7 = fVar9 * DAT_002d6434 * fVar7;
    local_2c = fVar7;
    local_28 = fVar7;
LAB_002d6208:
    local_30 = fVar7;
    fVar7 = local_28;
  }
  local_28 = fVar7;
  iVar3 = *(int *)(param_2 + 0x178);
  *(undefined1 *)(iVar3 + 0x1b7) = *(undefined1 *)(iVar3 + 0x1b6);
  *(undefined1 *)(iVar3 + 0x1b6) = 0;
  FUN_00358964(*(undefined4 *)(param_2 + 0x178),5,&local_30);
  FUN_003589cc(*(undefined4 *)(param_2 + 0x178),5);
  *(undefined1 *)(*(int *)(param_2 + 0x178) + 0x1b6) =
       *(undefined1 *)(*(int *)(param_2 + 0x178) + 0x1b7);
LAB_002d6254:
  if ((*(uint *)(param_2 + 4) & 0x80000000) != 0) {
    uVar2 = (uint)*(byte *)(param_2 + 0x19f);
    if (uVar2 == 0) {
      uVar2 = 10;
    }
    fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_2 + 0x19e),(byte)(in_fpscr >> 0x15) & 3);
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 0.0;
    fVar7 = fVar9 / fVar7;
    if ((*(uint *)(param_2 + 4) & 0x20) != 0) {
      fVar7 = fVar8;
    }
    local_24 = fVar7;
    FUN_00358964(*(undefined4 *)(param_2 + 0x178),3,&local_30);
    FUN_003589cc(*(undefined4 *)(param_2 + 0x178),3);
    iVar3 = *(int *)(param_2 + 0x178);
    *(undefined1 *)(iVar3 + 0x1b7) = *(undefined1 *)(iVar3 + 0x1b6);
    if (fVar7 == 1.0) {
      *(undefined1 *)(iVar3 + 0x1b6) = 1;
      *(undefined1 *)(*(int *)(param_2 + 0x178) + 0xb) = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x1b6) = 0;
      *(undefined1 *)(*(int *)(param_2 + 0x178) + 0xb) = 1;
      *(undefined1 *)(*(int *)(param_2 + 0x178) + 0x1ba) = 0;
    }
  }
  (**(code **)(param_2 + 0x140))(param_2,param_1);
  if (*(int *)(param_2 + 200) != 0) {
    uVar5 = extraout_r1;
    if ((*DAT_002d6438 & 1) == 0) {
      uVar10 = FUN_003679b4(DAT_002d6438);
      uVar5 = (int)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 != 0) {
        FUN_0036788c(DAT_002d643c);
        uVar5 = DAT_002d6444;
      }
    }
    FUN_0032d5b8(DAT_002d6448,uVar5);
    if (((*(uint *)(param_2 + 4) & 0x80000000) != 0) && ((*(uint *)(param_2 + 4) & 0x20) == 0)) {
      uVar2 = (uint)*(byte *)(param_2 + 0x19f);
      if (uVar2 == 0) {
        uVar2 = 10;
      }
      fVar8 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_2 + 0x19e),(byte)(in_fpscr >> 0x15) & 3);
      if (*(int *)(param_2 + 0x194) != 0) {
        local_30 = 0.0;
        local_2c = 0.0;
        local_28 = 0.0;
        local_24 = fVar7 / fVar8;
        uVar5 = FUN_003687a8(*(undefined4 *)(param_2 + 0x194));
        FUN_00358964(uVar5,3,&local_30);
        uVar5 = FUN_003687a8(*(undefined4 *)(param_2 + 0x194));
        FUN_003589cc(uVar5,3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x002d6414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 200))(param_2,unaff_r6,param_1);
    return;
  }
  return;
}

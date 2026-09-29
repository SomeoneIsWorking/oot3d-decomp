// OoT3D decomp @ 004792a4  name=FUN_004792a4  size=620

void FUN_004792a4(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;

  if ((*(short *)((int)param_2 + 0x12) != 0) &&
     (iVar2 = FUN_003695f8(), fVar6 = DAT_00479520, piVar1 = DAT_00479518, iVar2 == 0)) {
    if ((*(char *)(DAT_00479510 + param_1) == '\x01') &&
       (*(char *)(DAT_00479514 + param_1) != -0x14)) {
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00479518 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00372aa8((int)param_2 + 0x12,0,(int)(short)(int)(DAT_00479520 + fVar7 * DAT_0047951c));
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00372aa8(param_2 + 5,0,(int)(short)(int)(fVar6 + fVar7 * DAT_00479524));
      if (*(short *)((int)param_2 + 0x12) == 0) {
        return;
      }
    }
    if (*param_2 != 0) {
      iVar4 = (int)(short)param_2[5];
      iVar2 = 0;
      iVar3 = 0;
      fVar6 = *(float *)(DAT_00479528 + 0x58);
      local_38 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      local_34 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      local_30 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      local_2c = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x12),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_38 = local_38 * DAT_0047952c;
      local_34 = local_34 * DAT_0047952c;
      local_30 = local_30 * DAT_0047952c;
      local_2c = local_2c * DAT_0047952c;
      if ((char)param_2[4] == '\0') {
        fVar7 = (float)VectorUnsignedToFloat
                                 ((uint)*(ushort *)(param_2 + 2),(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = *(float *)(DAT_00479528 + 0x5c) +
                (fVar6 - *(float *)(DAT_00479528 + 0x5c)) * local_2c;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(ushort *)((int)param_2 + 10),(byte)(in_fpscr >> 0x15) & 3)
        ;
        iVar2 = (int)(fVar7 * *(float *)(DAT_00479528 + 0x60) * (DAT_00479530 - local_2c));
        iVar3 = (int)(fVar8 * *(float *)(DAT_00479528 + 0x60) * (DAT_00479530 - local_2c));
      }
      local_4c = param_2[3];
      iVar3 = (uint)*(ushort *)((int)param_2 + 10) + iVar3;
      iVar4 = (short)param_2[1] * 4 + ((uint)*(ushort *)(param_2 + 2) + iVar2) * -2;
      local_28 = DAT_00479534;
      local_20 = DAT_00479534;
      iVar5 = ((int)*(short *)((int)param_2 + 6) + *(int *)(DAT_00479528 + 0x54)) * 4 + iVar3 * -2;
      local_64 = 0;
      local_60 = 0;
      local_5c = DAT_00479534;
      local_68 = 0x3f800000;
      local_58 = 0;
      uStack_54 = 0x3f800000;
      local_50 = 0;
      local_48 = 0;
      local_44 = 0;
      uStack_40 = 0x3f800000;
      local_3c = DAT_00479534;
      local_24 = local_4c;
      FUN_00347790(fVar6,4,iVar4,iVar5,iVar4 + ((uint)*(ushort *)(param_2 + 2) + iVar2) * 4 + -4,
                   iVar5 + iVar3 * 4 + -1,*param_2,&local_68,&local_38,DAT_00479538,0);
    }
  }
  return;
}

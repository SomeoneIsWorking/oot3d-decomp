// OoT3D decomp @ 001b994c  name=FUN_001b994c  size=1700

void FUN_001b994c(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;

  uVar4 = DAT_001b9c48;
  fVar11 = DAT_001b9c44;
  if (*(short *)(param_1 + 0x29c) != 0) {
    if (DAT_001b9c44 < *(float *)(param_1 + 0x88)) {
      *(undefined2 *)(param_1 + 0x1c) = 4;
    }
    else {
      *(undefined2 *)(param_1 + 0x1c) = 1;
    }
    iVar6 = FUN_00364670(param_1,param_1 + 0x284,param_2,(int)*(short *)(param_1 + 0x1c),0);
    if (iVar6 != 0) {
      if (*(char *)(param_1 + 0x2a4) == '\0') {
        FUN_00374444(param_2,param_1,param_1 + 0x28,0x80);
      }
      else {
        FUN_0036df58(param_2,param_1 + 0x28,8);
      }
      FUN_00374428(param_1);
      return;
    }
    return;
  }
  FUN_0037322c(DAT_001b9c48,param_1);
  FUN_0037572c(DAT_001b9c4c,param_1);
  FUN_00376864(param_1);
  (**(code **)(param_1 + 0x228))(param_1,param_2);
  FUN_00376340(uVar4,uVar4,uVar4,param_2,param_1,5);
  uVar5 = DAT_001b9c54;
  uVar4 = DAT_001b9c50;
  if ((*(byte *)(param_1 + 0x23c) & 2) != 0) {
    if (*(short *)(param_1 + 0x29a) != 1) {
      uVar7 = FUN_0036ae14(param_1 + 0x1a4,2);
      uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar5,fVar11,uVar7,uVar4,param_1 + 0x1a4,2);
    }
    *(undefined2 *)(param_1 + 0x29a) = 1;
    if (*(float *)(param_1 + 0x88) <= fVar11) {
      *(undefined4 *)(param_1 + 0x6c) = DAT_001b9c60;
      fVar10 = *(float *)(param_1 + 100);
      uVar4 = DAT_001b9c64;
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = DAT_001b9c58;
      fVar10 = *(float *)(param_1 + 100);
      uVar4 = DAT_001b9c5c;
    }
    if (fVar10 < fVar11) {
      *(undefined4 *)(param_1 + 100) = uVar4;
    }
    *(undefined2 *)(param_1 + 0x29e) = 0x5a;
    *(undefined4 *)(param_1 + 0x228) = DAT_001b9c68;
    goto LAB_001b9fe4;
  }
  if ((*(byte *)(param_1 + 0x23d) & 2) == 0) goto LAB_001b9fe4;
  *(byte *)(param_1 + 0x23d) = *(byte *)(param_1 + 0x23d) & 0xfd;
  bVar2 = *(byte *)(param_1 + 0xb9);
  bVar3 = false;
  bVar9 = false;
  if (bVar2 == 0xd) {
LAB_001b9d3c:
    switch(*(undefined2 *)(param_1 + 0x29a)) {
    case 0:
      if (0x3fffffff < *(int *)(param_1 + 0x1e0)) {
        iVar6 = *(int *)(param_1 + 0x1e0);
joined_r0x001b9e48:
        if (iVar6 <= DAT_001b9c6c) goto LAB_001b9e4c;
      }
      break;
    case 1:
      uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) < fVar11) << 0x1f;
      in_fpscr = uVar1 | (uint)(NAN(*(float *)(param_1 + 0x1e0)) || NAN(fVar11)) << 0x1c;
      if (((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) &&
         (*(int *)(param_1 + 0x1e0) < 0x3f800001)) {
LAB_001b9e4c:
        iVar6 = (int)*(short *)(param_1 + 0x92) - (int)*(short *)(param_1 + 0xbe);
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x254),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (((int)(fVar10 - *(float *)(param_1 + 0x2c)) + 0xbedfffffU < 0xffffff) &&
           ((short)iVar6 < DAT_001ba048)) {
          FUN_00375eb8(param_1);
          FUN_00375ed8(param_1,0x400000,0xff,0x200000,0x50);
          bVar3 = true;
          if (*(short *)(param_1 + 0x29a) != 1) {
            uVar7 = FUN_0036ae14(param_1 + 0x1a4,2);
            uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
            FUN_00375c08(uVar5,fVar11,uVar7,uVar4,param_1 + 0x1a4,2);
          }
          *(undefined2 *)(param_1 + 0x29a) = 1;
          *(undefined2 *)(param_1 + 0x29e) = 0x5a;
          *(undefined4 *)(param_1 + 0x228) = DAT_001b9c68;
        }
      }
      break;
    case 2:
      uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) < fVar11) << 0x1f;
      in_fpscr = uVar1 | (uint)(NAN(*(float *)(param_1 + 0x1e0)) || NAN(fVar11)) << 0x1c;
      if (((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) &&
         (*(int *)(param_1 + 0x1e0) <= DAT_001b9c70)) goto LAB_001b9e4c;
      break;
    case 3:
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) == fVar11) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_001b9e4c;
      break;
    case 4:
      if (DAT_001b9c6c + -0x600000 <= *(int *)(param_1 + 0x1e0)) {
        iVar6 = *(int *)(param_1 + 0x1e0);
        goto joined_r0x001b9e48;
      }
    }
  }
  else if (bVar2 < 0xe) {
    if (bVar2 == 1) goto LAB_001b9d3c;
    if (bVar2 != 2) goto switchD_001b9d44_default;
    *(undefined2 *)(param_1 + 0x298) = 4;
    bVar9 = false;
LAB_001b9d0c:
    FUN_00375eb8(param_1);
    FUN_00375ed8(param_1,0x400000,0xff,0x200000,0x50);
    bVar3 = true;
  }
  else {
    bVar9 = bVar2 == 0xe;
    if ((bVar9) || (bVar2 == 0xf)) {
      switch(*(undefined2 *)(param_1 + 0x29a)) {
      case 0:
        if (0x3fffffff < *(int *)(param_1 + 0x1e0)) {
          iVar6 = *(int *)(param_1 + 0x1e0);
joined_r0x001b9cbc:
          if (iVar6 <= DAT_001b9c6c) goto LAB_001b9cc0;
        }
        break;
      case 1:
        uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) < fVar11) << 0x1f;
        in_fpscr = uVar1 | (uint)(NAN(*(float *)(param_1 + 0x1e0)) || NAN(fVar11)) << 0x1c;
        if (((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) &&
           (*(int *)(param_1 + 0x1e0) < 0x3f800001)) {
LAB_001b9cc0:
          iVar6 = (int)*(short *)(param_1 + 0x92) - (int)*(short *)(param_1 + 0xbe);
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x254),
                                              (byte)(in_fpscr >> 0x15) & 3);
          if (((int)(fVar11 - *(float *)(param_1 + 0x2c)) + 0xbedfffffU < 0xffffff) &&
             ((short)iVar6 < DAT_001ba048)) goto LAB_001b9d0c;
        }
        break;
      case 2:
        uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) < fVar11) << 0x1f;
        in_fpscr = uVar1 | (uint)(NAN(*(float *)(param_1 + 0x1e0)) || NAN(fVar11)) << 0x1c;
        if (((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) &&
           (*(int *)(param_1 + 0x1e0) <= DAT_001b9c70)) goto LAB_001b9cc0;
        break;
      case 3:
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) == fVar11) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_001b9cc0;
        break;
      case 4:
        if (DAT_001b9c6c + -0x600000 <= *(int *)(param_1 + 0x1e0)) {
          iVar6 = *(int *)(param_1 + 0x1e0);
          goto joined_r0x001b9cbc;
        }
      }
    }
  }
switchD_001b9d44_default:
  local_40 = VectorSignedToFloat((int)*(short *)(param_1 + 0x252),(byte)(in_fpscr >> 0x15) & 3);
  local_3c = VectorSignedToFloat((int)*(short *)(param_1 + 0x254),(byte)(in_fpscr >> 0x15) & 3);
  local_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x256),(byte)(in_fpscr >> 0x15) & 3);
  puVar8 = *(undefined4 **)(param_1 + 0x268);
  if (*(char *)(param_1 + 0xb7) == '\0') {
    *(bool *)(param_1 + 0x2a4) = bVar9;
    FUN_00375e18(param_1 + 0x284,3,param_2);
    *(undefined2 *)(param_1 + 0x29c) = 1;
    FUN_00375b70(param_2,param_1);
    FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_001ba04c);
    FUN_003741e4(param_2,*puVar8,0,&local_40,0);
  }
  else if (!bVar3) {
    FUN_00375f90(param_2,&local_40,8);
    FUN_003741e4(param_2,*puVar8,1,&local_40,0);
  }
LAB_001b9fe4:
  FUN_0037632c(param_1,param_1 + 0x22c);
  iVar6 = param_2 + 0x5c78;
  FUN_003761f0(param_2,iVar6,param_1 + 0x22c);
  FUN_00376168(param_2,iVar6,param_1 + 0x22c);
  FUN_003762a4(param_2,iVar6,param_1 + 0x22c);
  FUN_003731e0(param_1 + 0x1a4);
  return;
}

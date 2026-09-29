// OoT3D decomp @ 002cf390  name=FUN_002cf390  size=744

void FUN_002cf390(undefined4 *param_1,int param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;

  uVar4 = DAT_002cf5d8;
  uVar3 = DAT_002cf5d4;
  fVar2 = DAT_002cf5d0;
  fVar10 = DAT_002cf5cc;
  if (param_2 == 0) {
    return;
  }
  cVar1 = *(char *)(param_2 + 0x15);
  if (cVar1 == '\0') {
    iVar7 = 0;
    if (0 < *(int *)(param_2 + 0x18)) {
      do {
        FUN_004892ac(param_1,iVar7 * 0x50 + 0x38 + *(int *)(param_2 + 0x1c),param_3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_2 + 0x18));
      return;
    }
  }
  else {
    if (cVar1 == '\x01') {
      fVar10 = *(float *)(param_2 + 0x40) * DAT_00489294;
      FUN_0033a754(fVar10,*(float *)(param_2 + 0x44) * DAT_00489294,fVar10,
                   *(undefined4 *)(param_2 + 0x4c),
                   *(float *)(param_2 + 0x50) + *(float *)(param_2 + 0x48) +
                   *(float *)(param_2 + 0x44) * DAT_00489290,*(undefined4 *)(param_2 + 0x54),
                   &local_38,0,0);
      if (((*DAT_00489298 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00489298), iVar7 != 0)) {
        FUN_0036788c(DAT_0048929c);
      }
      FUN_0033a638(DAT_004892a8,1,&local_38,param_3);
      return;
    }
    if (cVar1 == '\x02') {
      iVar7 = 0;
      if (0 < *(int *)(param_2 + 0x18)) {
        do {
          iVar6 = *(int *)(param_2 + 0x1c);
          uVar8 = VectorFloatToUnsigned(*param_3 * fVar10,3);
          uVar9 = VectorFloatToUnsigned(param_3[1] * fVar10,3);
          local_40 = (float)VectorUnsignedToFloat(uVar9 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
          uVar9 = VectorFloatToUnsigned(param_3[2] * fVar10,3);
          local_40 = local_40 * fVar2;
          local_44 = (float)VectorUnsignedToFloat(uVar8 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
          local_3c = (float)VectorUnsignedToFloat(uVar9 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
          local_44 = local_44 * fVar2;
          local_3c = local_3c * fVar2;
          local_38 = uVar3;
          if (((*DAT_002cf5dc & 1) == 0) && (iVar5 = FUN_003679b4(DAT_002cf5dc), iVar5 != 0)) {
            FUN_0036788c(DAT_002cf5e0);
          }
          FUN_002c56c4(uVar4,iVar6 + iVar7 * 0x5c + 0x28,iVar6 + iVar7 * 0x5c + 0x34,
                       iVar6 + iVar7 * 0x5c + 0x40,&local_44);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_2 + 0x18));
        return;
      }
    }
    else if (cVar1 == '\x03') {
      local_44 = 0.0;
      local_40 = 0.0;
      FUN_002c5900(*param_1,param_2 + 0x58,param_2 + 100,param_2 + 0x4c,0xff);
      local_44 = 0.0;
      local_40 = 0.0;
      FUN_002c5900(*param_1,param_2 + 0x4c,param_2 + 0x40,param_2 + 0x58,0xff);
    }
  }
  return;
}

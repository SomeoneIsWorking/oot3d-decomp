// OoT3D decomp @ 00149af8  name=FUN_00149af8  size=1272

void FUN_00149af8(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;

  fVar10 = DAT_00149eb8;
  local_3c = DAT_00149eb8;
  local_38 = DAT_00149ebc;
  local_34 = DAT_00149eb8;
  local_48 = DAT_00149eb8;
  local_44 = DAT_00149ec0;
  local_40 = DAT_00149eb8;
  FUN_00372224(&local_90,param_1 + 0x148);
  fVar8 = DAT_00149ec8;
  local_34 = *(float *)(param_1 + 0x550) * DAT_00149ec4;
  local_40 = *(float *)(param_1 + 0x550) * DAT_00149ec4;
  if (*(int *)(param_1 + 0x530) != 2) {
    if (*(short *)(param_1 + 0x1c) < 0) {
      FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_00149ecc,param_1,0);
      if (*(short *)(param_1 + 0x57c) != 0) {
        sVar2 = *(short *)(param_1 + 0x57c) + -1;
        uVar3 = (uint)sVar2;
        *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
        *(short *)(param_1 + 0x57c) = sVar2;
        if ((uVar3 & 5) == 0) {
          fVar12 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
          if ((int)uVar3 < 1) {
            fVar12 = fVar12 * DAT_00149ed0 * DAT_00149ed4 - DAT_00149ed8;
          }
          else {
            fVar12 = DAT_00149ed8 + fVar12 * DAT_00149ed0 * DAT_00149ed4;
          }
          pfVar4 = (float *)(DAT_00149edc + ((int)fVar12 >> 2) * 0xc);
          local_9c = *(float *)(param_1 + 0x28) + *pfVar4;
          local_98 = *(float *)(param_1 + 0x2c) + pfVar4[1];
          local_94 = *(float *)(param_1 + 0x30) + pfVar4[2];
          if (*(char *)(param_1 + 0x57e) == '\a' || *(char *)(param_1 + 0x57e) == '\x05') {
            local_98 = local_98 - DAT_00149ee4;
            FUN_003580ec(param_2,param_1,&local_9c,0x28,1,0,0xffffffff,1);
          }
          else {
            FUN_0035e710(DAT_00149ee0,param_2,param_1,&local_9c,0x96,0x96,0x96,0xfa,0xeb,0xf5,0xff);
          }
        }
      }
      local_98 = *(float *)(param_1 + 0x560) * fVar8;
    }
    else {
      local_98 = DAT_00149ec8;
    }
    local_94 = fVar10;
    local_9c = local_94;
    FUN_00372070(&local_90,&local_90,&local_9c);
    if (*(short *)(param_1 + 0x1c) == -3) {
      FUN_003735ac(auStack_54,&local_90,&local_3c);
      FUN_003735ac(auStack_60,&local_90,&local_48);
      if (*(float *)(param_1 + 0x550) == fVar10) {
        if (*(int *)(param_1 + 0x524) != 8) goto LAB_0014a024;
      }
      else {
        if (*(int *)(param_1 + 0x524) != 8) {
LAB_0014a024:
          FUN_00362384(*(undefined4 *)(param_1 + 0x578));
          FUN_0035eb74();
          return;
        }
        if (((*(uint *)(DAT_0014a048 + param_2) & 1) == 0) && (*(char *)(param_1 + 0xb7) != '\0')) {
          uVar6 = FUN_00362384(*(undefined4 *)(param_1 + 0x578));
          FUN_003620f0(uVar6,auStack_54,auStack_60);
          return;
        }
      }
    }
    else {
      FUN_00357fd0(*(undefined4 *)(param_2 + 0x20ac),*(undefined4 *)(param_1 + 0x178),param_1 + 0x28
                  );
      sVar2 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_00149ee8 + param_2) * 4 + 0xa54)
                          );
      fVar8 = (float)VectorSignedToFloat((int)(short)((sVar2 - *(short *)(param_1 + 0xbe)) + -0x8000
                                                     ),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar8 * DAT_00149eec,&local_90,1);
      fVar8 = DAT_00149ef4;
      fVar12 = *(float *)(param_1 + 0x560) * DAT_00149ef0;
      fVar11 = *(float *)(param_1 + 0x55c) * DAT_00149ef0;
      local_90 = local_90 * fVar12;
      local_80 = local_80 * fVar12;
      local_70 = local_70 * fVar12;
      local_8c = local_8c * fVar11;
      local_7c = local_7c * fVar11;
      local_6c = local_6c * fVar11;
      local_88 = local_88 * DAT_00149ef4;
      local_78 = local_78 * DAT_00149ef4;
      local_68 = local_68 * DAT_00149ef4;
      bVar7 = *(char *)(param_1 + 0x577) == '\0';
      cVar1 = '\0';
      if (!bVar7) {
        cVar1 = *(char *)(param_2 + 0x208f);
      }
      if ((bVar7 || cVar1 == '\0') || (*(char *)(DAT_00149ef8 + param_2) != '\0')) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      fVar12 = DAT_00149ef4;
      if (bVar7) {
        fVar12 = DAT_00149efc;
      }
      iVar5 = FUN_003695f8();
      fVar11 = fVar10;
      if (iVar5 == 0) {
        fVar11 = fVar8;
      }
      *(float *)(*(int *)(param_1 + 0x508) + 0xc) = fVar11;
      FUN_00373bec(*(undefined4 *)(param_1 + 0x508));
      uVar6 = DAT_00149f04;
      fVar11 = DAT_00149f00;
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x573),(byte)(in_fpscr >> 0x15) & 3);
      FUN_00357ef8(DAT_00149f04,DAT_00149f04,DAT_00149f04,fVar9 * DAT_00149f00 * fVar12,
                   param_1 + 0x500);
      *(undefined1 *)(*(int *)(param_1 + 0x500) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x500),&local_90);
      FUN_00372170(*(undefined4 *)(param_1 + 0x500),0);
      if (bVar7) {
        FUN_00357ed4(param_2,param_1 + 0x518,DAT_00149f08,param_1);
        *(float *)(*(int *)(param_1 + 0x514) + 0xc) = fVar10;
        if (*DAT_0014a044 == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x514) + 8) =
               *(undefined4 *)(*(int *)(param_1 + 0x508) + 8);
          FUN_003586ec();
        }
        FUN_00373bec(*(undefined4 *)(param_1 + 0x514));
        fVar10 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x573),(byte)(in_fpscr >> 0x15) & 3);
        FUN_00357ef8(uVar6,uVar6,uVar6,fVar10 * fVar11 * (fVar8 - fVar12),param_1 + 0x50c);
        *(undefined1 *)(*(int *)(param_1 + 0x50c) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x50c),&local_90);
      }
    }
  }
  return;
}

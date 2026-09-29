// OoT3D decomp @ 0028620c  name=FUN_0028620c  size=768

void FUN_0028620c(int param_1,int param_2)

{
  float fVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [48];

  if (*(int *)(param_1 + 0x1c0) == 0) {
    return;
  }
  local_5c = *(float *)(param_1 + 0x28);
  local_58 = *(float *)(param_1 + 0x2c);
  local_54 = *(float *)(param_1 + 0x30);
  FUN_00357fd0(*(undefined4 *)(param_2 + 0x20ac),*(undefined4 *)(param_1 + 0x178),param_1 + 0x28);
  if ((((*(int *)(param_1 + *(short *)(param_1 + 0x22c) * 4 + 0x1f0) == 0x32) ||
       (DAT_0028650c <= (int)ABS(*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x2c)))) ||
      (psVar2 = (short *)FUN_00359690(param_2 + 0xa98), psVar2 == (short *)0x0)) ||
     (*psVar2 != 0xff)) {
    psVar2 = (short *)0x0;
  }
  if (((psVar2 != (short *)0x0) && ((psVar2[0xe2] & 0x20U) != 0)) &&
     (iVar3 = FUN_0034a944(*(undefined4 *)(psVar2 + 0xec),param_2,(int)psVar2[0xd8],param_1),
     iVar3 == 0)) {
    *(short **)(param_1 + 0x1dc) = psVar2;
  }
  fVar1 = DAT_00286514;
  uVar4 = (uint)*(ushort *)(param_1 + 0x1c4);
  bVar5 = (*(ushort *)(param_1 + 0x1c4) & 0x100) != 0;
  if (bVar5) {
    uVar4 = *(uint *)(param_1 + 0x1dc);
  }
  if (bVar5 && uVar4 != 0) {
    if ((*(ushort *)(uVar4 + 0x1c4) & 0x10) != 0) {
      *(float *)(param_1 + 0x1e0) = *(float *)(uVar4 + 0x28) - *(float *)(uVar4 + 0x108);
      iVar3 = DAT_00286510;
      *(float *)(param_1 + 0x1e4) =
           *(float *)(*(int *)(param_1 + 0x1dc) + 0x30) -
           *(float *)(*(int *)(param_1 + 0x1dc) + 0x110);
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1e0);
      fVar7 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x1e4);
      *(float *)(param_1 + 0x30) = fVar7;
      fVar8 = *(float *)(param_1 + 0x28);
      fVar6 = *(float *)(param_1 + 8);
      if (fVar8 <= fVar6) {
        while (iVar3 <= (int)(fVar6 - fVar8)) {
          fVar6 = *(float *)(param_1 + 8) - fVar1;
          *(float *)(param_1 + 8) = fVar6;
        }
      }
      else {
        while (iVar3 <= (int)(fVar8 - fVar6)) {
          fVar6 = *(float *)(param_1 + 8) + fVar1;
          *(float *)(param_1 + 8) = fVar6;
        }
      }
      fVar6 = *(float *)(param_1 + 0x10);
      if (fVar7 <= fVar6) {
        while (iVar3 <= (int)(fVar6 - fVar7)) {
          fVar6 = *(float *)(param_1 + 0x10) - fVar1;
          *(float *)(param_1 + 0x10) = fVar6;
        }
      }
      else {
        while (iVar3 <= (int)(fVar7 - fVar6)) {
          fVar6 = *(float *)(param_1 + 0x10) + fVar1;
          *(float *)(param_1 + 0x10) = fVar6;
        }
      }
      local_68 = *(float *)(param_1 + 0x1e0) * DAT_00286518;
      local_60 = *(float *)(param_1 + 0x1e4) * DAT_00286518;
      local_64 = DAT_0028651c;
      FUN_00372070(auStack_50,param_1 + 0x148,&local_68);
      local_5c = local_5c + local_68;
      local_58 = local_58 + local_64;
      local_54 = local_54 + local_60;
      goto LAB_002864b8;
    }
    if ((*(ushort *)(uVar4 + 0x1c4) & 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
  }
  FUN_00372224(auStack_50,param_1 + 0x148);
LAB_002864b8:
  *(ushort *)(param_1 + 0x1c4) = *(ushort *)(param_1 + 0x1c4) & 0xfeff;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1c0),auStack_50);
  *(undefined1 *)(*(int *)(param_1 + 0x1c0) + 0xac) = 1;
  if (*(short *)(param_2 + 0x104) == 6) {
    FUN_00357fd0(*(undefined4 *)(param_2 + 0x20ac),*(undefined4 *)(param_1 + 0x178),&local_5c);
  }
  FUN_00372170(*(undefined4 *)(param_1 + 0x1c0),0);
  return;
}

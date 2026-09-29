// OoT3D decomp @ 0028d620  name=FUN_0028d620  size=1012

void FUN_0028d620(int param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float local_98 [3];
  undefined4 uStack_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;

  FUN_00372224(&local_64,param_1 + 0x148);
  iVar5 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
  local_74 = *DAT_0028da14;
  uStack_70 = DAT_0028da14[1];
  uStack_6c = DAT_0028da14[2];
  uStack_68 = DAT_0028da14[3];
  FUN_003589cc(iVar5,4);
  FUN_00358964(iVar5,4,&local_74);
  fVar3 = DAT_0028da1c;
  iVar1 = DAT_0028da18;
  *(undefined1 *)(iVar5 + 0x1b7) = *(undefined1 *)(iVar5 + 0x1b6);
  *(undefined1 *)(iVar5 + 0x1b6) = 1;
  *(undefined1 *)(iVar5 + 0xb) = 1;
  if (*(char *)(iVar1 + 2) != '\0') {
    local_84 = (float)VectorUnsignedToFloat((uint)*DAT_0028da20,(byte)(in_fpscr >> 0x15) & 3);
    local_84 = local_84 * fVar3;
    local_80 = (float)VectorUnsignedToFloat((uint)DAT_0028da20[1],(byte)(in_fpscr >> 0x15) & 3);
    local_80 = local_80 * fVar3;
    local_7c = (float)VectorUnsignedToFloat((uint)DAT_0028da20[2],(byte)(in_fpscr >> 0x15) & 3);
    local_7c = local_7c * fVar3;
    local_78 = (float)VectorUnsignedToFloat((uint)*DAT_0028da24,(byte)(in_fpscr >> 0x15) & 3);
    local_78 = local_78 * fVar3;
    FUN_00357a50(param_1 + 0x1a4,0,5,&local_84,0);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0028da2c,DAT_0028da28,param_1,0);
  fVar4 = DAT_0028da34;
  if (1 < *(short *)(param_1 + 0x15ee)) {
    iVar1 = (int)*(short *)(param_1 + 0x15ee) >> 1;
    uVar8 = 0;
    uVar7 = (int)*(short *)(param_1 + 0x15ec) + 4;
    iVar5 = (int)((longlong)(int)uVar7 * (longlong)DAT_0028da30 + ((ulonglong)uVar7 << 0x20) >> 0x20
                 );
    iVar10 = 0;
    iVar11 = ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7 + uVar7;
    uVar7 = iVar11 + 2;
    iVar5 = (int)((longlong)(int)uVar7 * (longlong)DAT_0028da30 + ((ulonglong)uVar7 << 0x20) >> 0x20
                 );
    pfVar6 = (float *)(param_1 + (((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7 + uVar7) * 0x1c + 0x15f0);
    iVar5 = DAT_0028da30;
    if (0 < iVar1) {
      do {
        iVar12 = param_1 + iVar11 * 0x1c;
        pfVar9 = (float *)(iVar12 + 0x15f0);
        fVar13 = pfVar6[1] - *(float *)(iVar12 + 0x15f4);
        fVar14 = pfVar6[2] - *(float *)(iVar12 + 0x15f8);
        if (DAT_0028da38 <
            (int)((*pfVar6 - *pfVar9) * (*pfVar6 - *pfVar9) + fVar13 * fVar13 + fVar14 * fVar14)) {
          FUN_003679d0(*pfVar9,*(undefined4 *)(iVar12 + 0x15f4),*(undefined4 *)(iVar12 + 0x15f8),
                       &local_64,iVar12 + 0x15fc,iVar5,uVar8);
          local_64 = local_64 * fVar4;
          iVar5 = param_1 + iVar10 * 0x84;
          iVar12 = iVar5 + 0x16b8;
          local_54 = local_54 * fVar4;
          local_44 = local_44 * fVar4;
          local_60 = local_60 * fVar4;
          local_50 = local_50 * fVar4;
          local_40 = local_40 * fVar4;
          local_5c = local_5c * fVar4;
          local_4c = local_4c * fVar4;
          local_3c = local_3c * fVar4;
          *(float **)(param_1 + 0x16b4) = pfVar9;
          local_78 = (float)FUN_003687a8(*(undefined4 *)(iVar5 + 0x16e0));
          local_88 = 0;
          local_84 = 0.0;
          local_80 = 0.0;
          iVar5 = 3 - iVar10;
          local_7c = (float)VectorSignedToFloat(iVar5 * 0x1e + 0x46,(byte)(in_fpscr >> 0x15) & 3);
          local_7c = local_7c * fVar3;
          FUN_003589cc(local_78,4);
          FUN_00358964(local_78,4,&local_88);
          local_98[1] = 0.0;
          uStack_8c = 0;
          local_98[0] = (float)VectorSignedToFloat(iVar5 * 10 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
          local_98[0] = local_98[0] * fVar3;
          local_98[2] = (float)VectorSignedToFloat(iVar5 * 0x14 + 0x32,(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_98[2] = local_98[2] * fVar3;
          FUN_00357a50(iVar12,0,4,&local_88,2);
          FUN_003589cc(local_78,5);
          FUN_00358964(local_78,5,local_98);
          FUN_00357a50(iVar12,0,5,local_98,0);
          FUN_0035e240(iVar12,&local_64,DAT_0028da3c,0,param_1,0);
        }
        uVar7 = iVar11 + 5;
        lVar2 = (longlong)(int)uVar7 * (longlong)DAT_0028da30 + ((ulonglong)uVar7 << 0x20);
        uVar8 = (undefined4)lVar2;
        iVar11 = (int)((ulonglong)lVar2 >> 0x20);
        iVar10 = iVar10 + 1;
        iVar5 = iVar11 >> 2;
        iVar11 = (iVar5 - (iVar11 >> 0x1f)) * -7 + uVar7;
        pfVar6 = pfVar9;
      } while (iVar10 < iVar1);
    }
  }
  FUN_0032709c(param_1,param_2);
  return;
}

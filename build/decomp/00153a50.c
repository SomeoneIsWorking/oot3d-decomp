// OoT3D decomp @ 00153a50  name=FUN_00153a50  size=540

void FUN_00153a50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;

  iVar9 = FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00153c6c;
  if ((*(char *)(param_1 + 0x231) == '\0') &&
     (iVar10 = FUN_003736fc(DAT_00153c70,param_1 + 0x1a4), uVar2 = DAT_00153c74, iVar10 != 0)) {
    *(undefined1 *)(param_1 + 0x231) = 1;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    FUN_003731e8(DAT_00153c78,param_1 + 0x1a4);
  }
  uVar2 = DAT_00153c94;
  fVar5 = DAT_00153c90;
  iVar4 = DAT_00153c8c;
  fVar3 = DAT_00153c88;
  iVar10 = DAT_00153c80;
  fVar11 = *(float *)(param_1 + 0x6c) * DAT_00153c7c;
  *(float *)(param_1 + 0x6c) = fVar11;
  if (iVar10 < (int)fVar11) {
    fVar11 = DAT_00153c84;
  }
  *(float *)(param_1 + 0x6c) = fVar11;
  fVar6 = DAT_00153c98;
  if (*(char *)(param_1 + 0x231) == '\0') {
    FUN_00373500(DAT_00153cb0,uVar2,param_1 + 0xedc);
    FUN_003705a0(*(float *)(param_1 + 0xc) - fVar3,DAT_00153cb4,param_1 + 0x2c);
    *(float *)(iVar4 + 4) = *(float *)(iVar4 + 4) + fVar5;
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) + fVar5;
  }
  else {
    iVar10 = FUN_0036e168(DAT_00153c98,uVar2,fVar11,uVar1);
    if (iVar10 < DAT_00153c9c) {
      *(float *)(param_1 + 0xedc) = fVar6;
      FUN_00370350(DAT_00153ca0,param_1 + 0x1a4,0x18);
      uVar8 = FUN_00367358(param_1,iVar4 + -0x68);
      *(undefined2 *)(param_1 + 0x240) = uVar8;
      *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
      *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) & 0xfe;
      uVar1 = DAT_00153ca4;
      *(float *)(param_1 + 0xedc) = -*(float *)(param_1 + 0xedc);
      *(undefined4 *)(param_1 + 0x22c) = uVar1;
    }
    else {
      fVar11 = (fVar6 - *(float *)(param_1 + 0xedc)) * DAT_00153ca8;
      if (DAT_00153cac < (int)fVar11) {
        fVar11 = fVar3;
      }
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar11;
    }
    if (iVar9 == 0) {
      *(float *)(iVar4 + 8) = *(float *)(iVar4 + 8) + fVar5;
      *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) + fVar5;
    }
  }
  piVar7 = DAT_00153cb8;
  if ((*(byte *)(param_1 + 0xefc) & 2) != 0) {
    *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
    uVar2 = DAT_00153cc0;
    uVar1 = DAT_00153cbc;
    iVar9 = *piVar7;
    *(byte *)(iVar9 + 0xefc) = *(byte *)(iVar9 + 0xefc) & 0xfc;
    iVar9 = piVar7[1];
    *(byte *)(iVar9 + 0xefc) = *(byte *)(iVar9 + 0xefc) & 0xfc;
    FUN_00374bb8(uVar2,uVar1,param_2,param_1,(int)*(short *)(param_1 + 0xbe));
    FUN_0036f59c(*(undefined4 *)(DAT_00153cc4 + param_2),DAT_00153cc8);
    return;
  }
  return;
}

// OoT3D decomp @ 00375c44  name=FUN_00375c44  size=224

void FUN_00375c44(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;

  puVar5 = (ushort *)0x0;
  puVar7 = (ushort *)(param_1 + 0x2518);
  iVar1 = 0;
  uVar3 = DAT_00375d24;
  do {
    uVar2 = (uint)*puVar7;
    if (uVar2 == 0) {
      if (iVar1 < 0x10) goto LAB_00375cac;
      break;
    }
    if ((int)uVar2 < (int)uVar3) {
      uVar3 = uVar2;
      puVar5 = puVar7;
    }
    iVar1 = iVar1 + 1;
    puVar7 = puVar7 + 8;
  } while (iVar1 < 0x10);
  FUN_0049fa58(puVar5 + 2);
  puVar7 = puVar5;
LAB_00375cac:
  fVar8 = DAT_00375d2c;
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  *(undefined4 *)(puVar7 + 2) = *param_2;
  *(undefined4 *)(puVar7 + 4) = uVar4;
  *(undefined4 *)(puVar7 + 6) = uVar6;
  uVar6 = DAT_00375d38;
  uVar4 = DAT_00375d34;
  fVar9 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00375d28 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  if (param_3 < 1) {
    fVar8 = fVar10 * fVar9 * fVar8 - DAT_00375d30;
  }
  else {
    fVar8 = DAT_00375d30 + fVar10 * fVar9 * fVar8;
  }
  *puVar7 = (ushort)(int)fVar8;
  FUN_0037547c(param_4,puVar7 + 2,4,uVar6,uVar6,uVar4);
  return;
}

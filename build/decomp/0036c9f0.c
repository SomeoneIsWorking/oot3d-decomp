// OoT3D decomp @ 0036c9f0  name=FUN_0036c9f0  size=216

void FUN_0036c9f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  uint in_fpscr;
  undefined2 uVar5;
  float fVar6;

  FUN_00370350(DAT_0036cac8,param_1 + 0x228,0xd);
  uVar2 = DAT_0036cad4;
  iVar1 = DAT_0036cad0;
  *(undefined4 *)(param_1 + 0x888) = DAT_0036cacc;
  *(undefined1 *)(param_1 + 0xa34) = 0;
  *(undefined2 *)(iVar1 + param_1) = 0x96;
  fVar6 = (float)FUN_00371e50();
  fVar4 = DAT_0036cadc;
  fVar3 = DAT_0036cad8;
  if ((short)(int)fVar6 + 0x32 < 1) {
    fVar6 = (float)FUN_00371e50(uVar2);
    fVar6 = (float)VectorSignedToFloat((short)(int)fVar6 + 0x32,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = (undefined2)(int)(fVar6 * fVar3 * fVar4 - fVar4);
  }
  else {
    fVar6 = (float)FUN_00371e50(uVar2);
    fVar6 = (float)VectorSignedToFloat((short)(int)fVar6 + 0x32,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = (undefined2)(int)(fVar4 + fVar6 * fVar3 * fVar4);
  }
  *(undefined2 *)(DAT_0036cae0 + param_1) = uVar5;
  return;
}

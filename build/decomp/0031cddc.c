// OoT3D decomp @ 0031cddc  name=FUN_0031cddc  size=208

void FUN_0031cddc(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;

  fVar4 = DAT_0031ceb4;
  piVar3 = DAT_0031ceb0;
  pfVar6 = (float *)(param_1 + 0xbc8);
  fVar7 = *pfVar6 + DAT_0031ceac;
  *pfVar6 = fVar7;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x145a),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (fVar8 + fVar4 <= fVar7) {
    sVar2 = *(short *)(*piVar3 + 0x1456);
    uVar1 = *(undefined1 *)(param_1 + 0x219);
    iVar5 = FUN_003478bc(*(undefined4 *)(param_1 + 0x1cc),uVar1);
    uVar9 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = FUN_003478bc(*(undefined4 *)(param_1 + 0x1cc),uVar1);
    local_24 = *(undefined4 *)(iVar5 + 0x2c);
    local_28 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
    local_2c = uVar9;
    FUN_00362068(param_2,&local_2c,100,(int)(short)(sVar2 + 500),0);
    *pfVar6 = DAT_0031ceb8;
  }
  return;
}

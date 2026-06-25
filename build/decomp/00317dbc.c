// OoT3D decomp @ 00317dbc  name=FUN_00317dbc  size=112

void FUN_00317dbc(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar2 = FUN_0034807c(*(int *)(param_1 + 4),param_2), iVar2 != 0)) {
    piVar3 = (int *)FUN_0034807c(*(undefined4 *)(param_1 + 4),param_2);
    fVar1 = DAT_00317e2c;
    if (piVar3 == (int *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar3 + *(int *)(*piVar3 + 0x14) + 0x10);
    }
    fVar5 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x48) = fVar5;
    *(float *)(param_1 + 0x4c) = fVar5 + fVar1;
  }
  return;
}


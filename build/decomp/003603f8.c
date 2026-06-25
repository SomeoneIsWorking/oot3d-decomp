// OoT3D decomp @ 003603f8  name=FUN_003603f8  size=240

void FUN_003603f8(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  
  pfVar3 = (float *)(param_2 + 0x2ac);
  if ((param_3 & 0x200) == 0) {
    bVar4 = (param_3 & 0x100) == 0;
    if (bVar4) {
      param_4 = (uint)*(byte *)(param_2 + 0x2a6);
    }
    if (bVar4 && param_4 == 0) {
      uVar2 = (uint)*(byte *)(param_2 + 0x2c9);
      *(undefined4 *)(param_2 + 0x2ac) =
           *(undefined4 *)(*(int *)(param_2 + 0x2cc) + uVar2 * 0x34 + 0xc);
      *(undefined4 *)(param_2 + 0x2b0) =
           *(undefined4 *)(*(int *)(param_2 + 0x2cc) + uVar2 * 0x34 + 0x1c);
      *(undefined4 *)(param_2 + 0x2b4) =
           *(undefined4 *)(*(int *)(param_2 + 0x2cc) + uVar2 * 0x34 + 0x2c);
      *(undefined2 *)(param_2 + 0x2a8) = *(undefined2 *)(param_2 + 0xbe);
    }
    else {
      *pfVar3 = *(float *)(param_2 + 0x2b8);
      *(undefined4 *)(param_2 + 0x2b0) = *(undefined4 *)(param_2 + 700);
      *(undefined4 *)(param_2 + 0x2b4) = *(undefined4 *)(param_2 + 0x2c0);
      *(undefined2 *)(param_2 + 0x2a8) = *(undefined2 *)(param_2 + 0xbe);
    }
  }
  else {
    *pfVar3 = *(float *)(param_2 + 0x2b8);
    *(undefined4 *)(param_2 + 0x2b0) = *(undefined4 *)(param_2 + 700);
    *(undefined4 *)(param_2 + 0x2b4) = *(undefined4 *)(param_2 + 0x2c0);
    *(undefined2 *)(param_2 + 0x2a8) = *(undefined2 *)(param_2 + 0xbe);
    fVar5 = *(float *)(*(int *)(DAT_003604e8 + param_2) + 8);
    *pfVar3 = *(float *)(param_2 + 0x2ac) * fVar5;
    *(float *)(param_2 + 0x2b0) = *(float *)(param_2 + 0x2b0) * fVar5;
    *(float *)(param_2 + 0x2b4) = *(float *)(param_2 + 0x2b4) * fVar5;
  }
  uVar1 = DAT_003604ec;
  *(char *)(param_2 + 0x2a6) = (char)param_3;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x221c) = uVar1;
  FUN_00330ed8();
  return;
}


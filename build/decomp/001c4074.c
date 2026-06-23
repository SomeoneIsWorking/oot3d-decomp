// OoT3D decomp @ 001c4074  name=FUN_001c4074  size=180

void FUN_001c4074(int param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  short local_18 [2];
  
  fVar3 = (float)FUN_0035c628(param_1,*(undefined4 *)(param_1 + 0xe18),
                              (int)*(char *)(param_1 + 0xe1c),local_18);
  FUN_00375a18(param_1 + 0x36,(int)local_18[0],10,1000,1);
  fVar1 = DAT_001c4128;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  if (((fVar3 != fVar1 && fVar3 < fVar1 == (NAN(fVar3) || NAN(fVar1))) &&
      ((int)fVar3 < DAT_001c412c)) &&
     (cVar2 = *(char *)(param_1 + 0xe1c) + '\x01', *(char *)(param_1 + 0xe1c) = cVar2,
     (int)(**(byte **)(param_1 + 0xe18) - 1) < (int)cVar2)) {
    *(undefined *)(param_1 + 0xe1c) = 0;
  }
  return;
}


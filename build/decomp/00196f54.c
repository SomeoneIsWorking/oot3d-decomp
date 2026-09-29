// OoT3D decomp @ 00196f54  name=FUN_00196f54  size=584

void FUN_00196f54(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;

  FUN_003705a0(DAT_001972ec,*(undefined4 *)(DAT_001972e8 + 0xc),param_1 + 0x6c);
  uVar4 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x6c),
                       param_1 + 0x28);
  uVar5 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x6c),
                       param_1 + 0x30);
  fVar3 = DAT_001972f8;
  fVar2 = DAT_001972f4;
  fVar1 = DAT_001972f0;
  if ((uVar5 & uVar4) == 0) {
    if ((DAT_00197310 < *(int *)(param_1 + 0x6c)) && (DAT_001972f8 <= *(float *)(param_1 + 0x2c))) {
      FUN_003738a8(DAT_00197314);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  else {
    *(float *)(param_1 + 0x6c) = DAT_001972f8;
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x30);
    if (*(float *)(param_1 + 100) <= fVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    }
    *(undefined2 *)(param_1 + 0x1c) = 0;
    FUN_0036e980(param_2,param_1,7);
    FUN_00375bcc(param_1,DAT_001972fc);
    if ((0x3f7fffff < (int)ABS(*(float *)(param_1 + 0x28) + DAT_00197300)) ||
       (uVar6 = DAT_00197308, 0x3f7fffff < (int)ABS(*(float *)(param_1 + 0x30) + DAT_00197304))) {
      uVar6 = DAT_0019730c;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar6;
  }
  uVar6 = DAT_0019733c;
  if ((((fVar3 < *(float *)(param_1 + 100)) ||
       ((uVar4 = *(uint *)(param_1 + 0x28), DAT_00197328 <= uVar4 &&
        (DAT_00197328 - 0x4b0000 <= *(uint *)(param_1 + 0x30))))) ||
      ((DAT_0019732c <= uVar4 && (*(uint *)(param_1 + 0x30) <= DAT_00197330)))) ||
     (((uVar4 <= DAT_00197334 && (DAT_00197334 + 0x1e8000 <= *(uint *)(param_1 + 0x30))) ||
      ((uVar4 <= DAT_00197338 && (*(uint *)(param_1 + 0x30) <= DAT_00197338 - 0x280000)))))) {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + fVar1;
    iVar7 = FUN_003705a0(uVar6,param_1 + 0x2c);
    if (iVar7 != 0) {
      *(float *)(param_1 + 100) = fVar3;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar2;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
      if (*(short *)(param_1 + 0x1c) != 0) {
        FUN_0036e980(param_2,param_1,7);
      }
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00197340;
    }
  }
  return;
}

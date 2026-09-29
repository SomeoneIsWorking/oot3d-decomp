// OoT3D decomp @ 00281edc  name=FUN_00281edc  size=496

void FUN_00281edc(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  float fVar7;

  *(undefined2 *)(param_3 + 0x78) = 1;
  uVar3 = DAT_002823ec;
  fVar2 = DAT_002822b0;
  uVar5 = DAT_00282290;
  fVar7 = DAT_0028228c;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
    *(undefined4 *)(param_3 + 0x60) = DAT_00282290;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  case 4:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002822a0 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_3 + 0x7a) =
         (short)(int)(DAT_002822d0 / fVar7 + DAT_00282294) + *(short *)(param_3 + 0x7a);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  case 5:
  case 6:
  case 7:
  case 8:
    *(undefined2 *)(param_3 + 0x56) = *(undefined2 *)(*(int *)(param_1 + 0x124) + 0xbe);
    fVar4 = DAT_002823f0;
    piVar1 = DAT_002822a0;
    if (*(short *)(param_3 + 0x7c) == 0x11) {
      fVar7 = DAT_002823e8;
    }
    fVar6 = fVar7 * DAT_002822c4;
    *(float *)(param_3 + 0x6c) = fVar7 * fVar2;
    *(undefined4 *)(param_3 + 0x60) = uVar5;
    *(undefined4 *)(param_3 + 0x68) = uVar3;
    *(float *)(param_3 + 0x70) = fVar6;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_3 + 0x7a) = (short)(int)(fVar4 / fVar7 + DAT_00282294);
    return;
  case 0xb:
    FUN_003580ec(param_2,param_1,param_3 + 0x30,0x28,0xffff8001,0,0xffffffff,1);
  case 3:
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  case 0xd:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002822a0 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_3 + 0x7a) = (short)(int)(DAT_002822ac / fVar7 + DAT_00282294);
  case 0xc:
    uVar5 = FUN_003738a8(DAT_002822b0);
    piVar1 = DAT_002822a0;
    *(undefined4 *)(param_3 + 0x6c) = uVar5;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_3 + 0x7a) =
         (short)(int)(DAT_002822b4 / fVar7 + DAT_00282294) + *(short *)(param_3 + 0x7a);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  case 0xe:
    FUN_003580ec(param_2,param_1,param_3 + 0x30,0x28,0xffff8001,0,0xffffffff,1);
  case 1:
  case 9:
  case 10:
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  default:
    return;
  }
}

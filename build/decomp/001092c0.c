// OoT3D decomp @ 001092c0  name=FUN_001092c0  size=384

void FUN_001092c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;

  uVar2 = DAT_001094a0;
  iVar3 = 0;
  while( true ) {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x66a),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if (*(short *)(param_1 + 0x66a) < 1) {
      fVar4 = fVar4 * DAT_00109490 * DAT_00109494 - DAT_00109498;
    }
    else {
      fVar4 = DAT_00109498 + fVar4 * DAT_00109490 * DAT_00109494;
    }
    iVar1 = (int)fVar4 + iVar3 * 2;
    if ((iVar1 / 4) * 4 - iVar1 == 0) break;
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      FUN_003731e0(param_1 + 0x1a4);
      FUN_00373264(param_1,DAT_001094ac);
      if (*(short *)(param_1 + 0x66a) != 0) {
        *(short *)(param_1 + 0x66a) = *(short *)(param_1 + 0x66a) + -1;
      }
      *(float *)(param_1 + 100) = -*(float *)(param_1 + 100);
      uVar2 = DAT_001094b4;
      if ((*(short *)(param_1 + 0x66a) == 0) &&
         (iVar3 = FUN_003736fc(DAT_001094b4,DAT_001094b0,param_1 + 0x1a4), iVar3 != 0)) {
        if (*(short *)(param_1 + 0x1c) == 1) {
          *(undefined2 *)(param_1 + 0x66a) = 0x1b;
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
          FUN_0036e734(param_1 + 0x1a4,3);
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          uVar2 = DAT_001094b8;
        }
        else {
          FUN_00373d40(param_1 + 0x1a4,1);
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
          *(undefined4 *)(param_1 + 100) = uVar2;
          *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) & 0xfe;
          uVar2 = DAT_001094bc;
        }
        *(undefined4 *)(param_1 + 0x664) = uVar2;
      }
      return;
    }
  }
  fVar4 = (float)FUN_003738a8(DAT_0010949c);
  FUN_003738a8(uVar2,iVar3 * 0x4000 + (int)(short)(int)fVar4 + 0x2000);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}

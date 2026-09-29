// OoT3D decomp @ 00145150  name=FUN_00145150  size=224

void FUN_00145150(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  uint in_fpscr;
  float fVar5;

  iVar3 = FUN_0037571c(param_2);
  psVar4 = (short *)0x0;
  if (iVar3 != 0) {
    psVar4 = *(short **)(DAT_00145284 + param_2);
  }
  if ((iVar3 != 0 && psVar4 != (short *)0x0) && (*psVar4 == 2)) {
    FUN_00375bcc(param_1,DAT_00145288);
    fVar1 = DAT_00145298;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0014528c + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)((int)(DAT_00145298 + fVar5 * DAT_00145290 * DAT_00145294) +
             (uint)*(byte *)(param_1 + 0x1e4)) < 0x100) {
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0014528c + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      cVar2 = *(byte *)(param_1 + 0x1e4) +
              (char)(int)(DAT_00145298 + fVar5 * DAT_00145290 * DAT_00145294);
    }
    else {
      cVar2 = -1;
    }
    *(char *)(param_1 + 0x1e4) = cVar2;
    FUN_0036e168(DAT_001452a4,fVar1,DAT_001452a0,DAT_0014529c,param_1 + 0x1e8);
    *(float *)(param_1 + 0x1cc) = *(float *)(param_1 + 0x1cc) + *(float *)(DAT_001452a8 + 0x4c);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}

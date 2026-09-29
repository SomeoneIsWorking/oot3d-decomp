// OoT3D decomp @ 00396c58  name=FUN_00396c58  size=236

void FUN_00396c58(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;

  iVar1 = *(int *)(iRam00396fcc + param_2);
  fVar2 = (float)VectorSignedToFloat(*(byte *)(iRam00396fd0 + 8) - 0xe,(byte)(in_fpscr >> 0x15) & 3)
  ;
  *(short *)(param_1 + 0xfb4) =
       *(short *)(param_1 + 0xfb4) + (short)(int)(fVar2 * fRam00396fd4) + 0xce4;
  fVar2 = (float)FUN_002cfca0();
  *(short *)(param_1 + 0xfb2) = (short)(int)(fVar2 * fRam00396fd8) + 0x96;
  if ((*(byte *)(param_1 + 0x10a0) & 2) != 0) {
    *(byte *)(param_1 + 0x10a0) = *(byte *)(param_1 + 0x10a0) & 0xfd;
    if (*(int *)(param_1 + 0x1094) == iVar1) {
      FUN_00374bb8(uRam00396fdc,uRam00396fdc,param_2,param_1,(int)*(short *)(param_1 + 0x92));
      fVar2 = (float)FUN_003738a8(uRam00396fe0);
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(int)fVar2 + -0x8000;
      FUN_00375bcc(iVar1,uRam00396fe4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}

// OoT3D decomp @ 0029561c  name=FUN_0029561c  size=284

void FUN_0029561c(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;

  FUN_00375a18(param_1 + 0xc0,0x7fff,1,4000,0);
  cVar4 = *(char *)(param_1 + 0x65a) + -1;
  *(char *)(param_1 + 0x65a) = cVar4;
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_00370734(param_1 + 0x1a4);
  if ((*(ushort *)(param_1 + 0x90) & 3) == 0) {
    if ((int)*(float *)(param_1 + 0xc4) < DAT_00295788) {
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + DAT_0029578c;
    }
    return;
  }
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    FUN_0036f00c(DAT_00295768,DAT_00295764,param_2,param_1,param_1 + 0x28,0xb,0,0,0);
    FUN_00375bcc(param_1,DAT_0029576c);
  }
  sVar1 = *(short *)(param_1 + 0x658) + -1;
  *(short *)(param_1 + 0x658) = sVar1;
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc4) = DAT_00295770;
    *(undefined1 *)(param_1 + 0x639) = 1;
    uVar2 = DAT_00295778;
    *(short *)(param_1 + 0x658) = (short)DAT_00295774;
    uVar3 = DAT_0029577c;
    *(undefined4 *)(param_1 + 100) = uVar2;
    FUN_00375bcc(param_1,uVar3);
    uVar2 = DAT_00295784;
    *(undefined4 *)(param_1 + 0x70) = DAT_00295780;
    *(undefined4 *)(param_1 + 0x63c) = uVar2;
  }
  return;
}

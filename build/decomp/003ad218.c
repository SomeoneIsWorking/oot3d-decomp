// OoT3D decomp @ 003ad218  name=FUN_003ad218  size=264

void FUN_003ad218(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;

  iVar5 = *(int *)(iRam003ad320 + param_2);
  FUN_0036e168(uRam003ad330,uRam003ad32c,uRam003ad328,uRam003ad324,param_1 + 0x54);
  FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x400;
  if ((*(uint *)(param_1 + 4) & 0x2000) == 0) {
    FUN_00376a78(param_2,0x71);
    fVar2 = fRam003ad340;
    iVar1 = iRam003ad338;
    uVar3 = (uint)*(short *)(param_1 + 0x1c);
    iVar4 = ((int)uVar3 >> 8 & 0x1cU) + iRam003ad338;
    *(uint *)(iVar4 + 0xeb4) =
         (uVar3 & 0xff) << (*(uint *)(iRam003ad334 + (uVar3 >> 6 & 0xc)) & 0xff) |
         *(uint *)(iVar4 + 0xeb4);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piRam003ad33c + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(iVar5 + 0x118) = (short)(int)(fVar2 / fVar6 + fRam003ad344);
    FUN_00367c7c(param_2,0xb4,0);
    if ((*(short *)(iVar1 + 0x44) != 0) && (*(short *)(iRam003ad348 + param_2) == 0)) {
      FUN_0035c528(uRam003ad34c);
    }
    *(undefined4 *)(param_1 + 0x1a4) = uRam003ad350;
  }
  return;
}

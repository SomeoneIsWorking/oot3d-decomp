// OoT3D decomp @ 0032525c  name=FUN_0032525c  size=248

void FUN_0032525c(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  pcVar3 = *(char **)(param_1 + 0x5b8c);
  iVar4 = 0;
  if (*(char *)(param_1 + 0x5b88) != '\0') {
    do {
      if (-1 < (short)*(ushort *)(pcVar3 + 4)) {
        cVar1 = *pcVar3;
        if (cVar1 < '\0') {
LAB_003252b4:
          cVar1 = pcVar3[2];
          if (-1 < cVar1) {
            cVar2 = *(char *)(param_1 + 0x4c30);
            bVar5 = cVar1 != cVar2;
            if (bVar5) {
              cVar2 = *(char *)(param_1 + 0x500c);
            }
            if (!bVar5 || cVar1 == cVar2) goto LAB_003252d4;
          }
        }
        else {
          cVar2 = *(char *)(param_1 + 0x4c30);
          bVar5 = cVar1 != cVar2;
          if (bVar5) {
            cVar2 = *(char *)(param_1 + 0x500c);
          }
          if (bVar5 && cVar1 != cVar2) goto LAB_003252b4;
LAB_003252d4:
          uVar8 = VectorSignedToFloat((int)*(short *)(pcVar3 + 10),(byte)(in_fpscr >> 0x15) & 3);
          uVar7 = VectorSignedToFloat((int)*(short *)(pcVar3 + 8),(byte)(in_fpscr >> 0x15) & 3);
          uVar6 = VectorSignedToFloat((int)*(short *)(pcVar3 + 6),(byte)(in_fpscr >> 0x15) & 3);
          z_actor_003738d0(uVar6,uVar7,uVar8,param_2,param_1,*(ushort *)(pcVar3 + 4) & 0x1fff,0,
                           (int)*(short *)(pcVar3 + 0xc),0,
                           (int)(short)(*(short *)(pcVar3 + 0xe) + (short)iVar4 * 0x400),1);
          *(short *)(pcVar3 + 4) = -*(short *)(pcVar3 + 4);
        }
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x10;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x5b88));
  }
  return;
}

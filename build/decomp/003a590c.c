// OoT3D decomp @ 003a590c  name=FUN_003a590c  size=452

undefined4 FUN_003a590c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint in_fpscr;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(param_1 + *(int *)(param_3 + 4));
  FUN_00317fb8(0);
  if (*pcVar6 == '\0') {
    uVar7 = 0;
    *(int *)(pcVar6 + 4) = *(int *)(pcVar6 + 4) + param_1;
    uVar1 = UNK_003a5ad0;
    if (pcVar6[1] != '\0') {
      do {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(*(int *)(pcVar6 + 4) + uVar7 * 8 + iVar5 * 4);
          if (iVar2 != 0) {
            uStack_44 = uVar1;
            uStack_40 = uVar1;
            uStack_3c = uVar1;
            FUN_00317e30(param_2,param_1 + iVar2,&uStack_44);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < (byte)pcVar6[1]);
    }
    iVar5 = *(int *)(pcVar6 + 8);
  }
  else {
    if (*pcVar6 != '\x02') goto LAB_003a5a98;
    uVar7 = 0;
    *(int *)(pcVar6 + 4) = *(int *)(pcVar6 + 4) + param_1;
    if (pcVar6[1] != '\0') {
      do {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(pcVar6 + 4);
          psVar4 = (short *)(iVar2 + uVar7 * 0x10);
          iVar3 = *(int *)(psVar4 + iVar5 * 2 + 4);
          if (iVar3 != 0) {
            uStack_44 = VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
            uStack_40 = VectorSignedToFloat((int)*(short *)(iVar2 + uVar7 * 0x10 + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
            uStack_3c = VectorSignedToFloat((int)*(short *)(iVar2 + uVar7 * 0x10 + 4),
                                            (byte)(in_fpscr >> 0x15) & 3);
            FUN_00317e30(param_2,iVar3 + param_1,&uStack_44);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < (byte)pcVar6[1]);
    }
    iVar5 = *(int *)(pcVar6 + 8);
  }
  if (iVar5 != 0) {
    *(int *)(pcVar6 + 8) = iVar5 + param_1;
  }
LAB_003a5a98:
  *(char **)(param_2 + 0x4ff8) = pcVar6;
  if (1 < *(byte *)(param_2 + 0x5c04)) {
    FUN_00317fb8(0x80000);
  }
  return 1;
}


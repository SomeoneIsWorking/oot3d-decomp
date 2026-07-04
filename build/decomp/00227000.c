// OoT3D decomp @ 00227000  name=FUN_00227000  size=420

undefined4 FUN_00227000(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = UNK_002271a4;
  cVar1 = '\0';
  if (param_1 != (char *)0x0) {
    cVar1 = param_1[0x25e];
  }
  if (param_1 != (char *)0x0 && cVar1 != '\0') {
    do {
      if (*param_1 != '\0') {
        if (*param_1 == '\x02') {
          return 0;
        }
        if (param_1[0x25e] != 0) {
          pcVar3 = param_1 + -0x20;
          if ((param_1[0x25e] & 1U) != 0) {
            pcVar3 = param_1 + 4;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          }
          for (uVar4 = (uint)((byte)param_1[0x25e] >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
            *(int *)(pcVar3 + 0x24) = *(int *)(pcVar3 + 0x24) + 1;
            *(int *)(pcVar3 + 0x48) = *(int *)(pcVar3 + 0x48) + 1;
            pcVar3 = pcVar3 + 0x48;
          }
        }
        if ((int)(uint)(byte)param_1[0x25f] < *(int *)(param_1 + 4)) {
          iVar5 = 0;
          do {
            FUN_00371738(param_1 + iVar5 * 0x24,param_1 + iVar5 * 0x24 + 0x24,0x22);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0xf);
          param_1[iVar5 * 0x24] = '\x02';
          *(undefined4 *)(param_1 + iVar5 * 0x24 + 8) = uVar2;
          *(undefined4 *)(param_1 + iVar5 * 0x24 + 0xc) = uVar2;
          *(undefined4 *)(param_1 + iVar5 * 0x24 + 0x10) = uVar2;
          *(undefined4 *)(param_1 + iVar5 * 0x24 + 0x14) = uVar2;
          *(undefined4 *)(param_1 + iVar5 * 0x24 + 0x18) = uVar2;
          *(undefined4 *)(param_1 + iVar5 * 0x24 + 0x1c) = uVar2;
          (param_1 + iVar5 * 0x24 + 0x20)[0] = '\0';
          (param_1 + iVar5 * 0x24 + 0x20)[1] = '\0';
          pcVar3 = param_1 + iVar5 * 0x24 + 4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          param_1[0x25e] = param_1[0x25e] + -1;
          return 0;
        }
        *(short *)(param_1 + 0x24c) = *(short *)(param_1 + 0x24c) + *(short *)(param_1 + 0x24a);
        return 0;
      }
      iVar5 = 0;
      do {
        FUN_00371738(param_1 + iVar5 * 0x24,param_1 + iVar5 * 0x24 + 0x24,0x22);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xf);
      param_1[iVar5 * 0x24] = '\x02';
      *(undefined4 *)(param_1 + iVar5 * 0x24 + 8) = uVar2;
      *(undefined4 *)(param_1 + iVar5 * 0x24 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + iVar5 * 0x24 + 0x10) = uVar2;
      *(undefined4 *)(param_1 + iVar5 * 0x24 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + iVar5 * 0x24 + 0x18) = uVar2;
      *(undefined4 *)(param_1 + iVar5 * 0x24 + 0x1c) = uVar2;
      (param_1 + iVar5 * 0x24 + 0x20)[0] = '\0';
      (param_1 + iVar5 * 0x24 + 0x20)[1] = '\0';
      pcVar3 = param_1 + iVar5 * 0x24 + 4;
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      cVar1 = param_1[0x25e];
      param_1[0x25e] = cVar1 + -1;
    } while ((char)(cVar1 + -1) != '\0');
  }
  return 0;
}


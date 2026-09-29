// OoT3D decomp @ 004a1dc4  name=FUN_004a1dc4  size=296

undefined4 FUN_004a1dc4(int *param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  if ((param_6 != 0) && (param_6 == 1)) {
    bVar5 = param_2 == 0x400;
    if (param_2 < 0x401) {
      bVar5 = param_5 == 0;
    }
    if (bVar5) {
      uVar4 = 0;
      do {
        *(undefined1 *)((int)param_1 + uVar4) = 0;
        uVar1 = uVar4 + 2;
        *(undefined1 *)((int)param_1 + uVar4 + 1) = 0;
        uVar4 = uVar1;
      } while (uVar1 < 0x20);
      iVar2 = FUN_002be9b8(0x670);
      *param_1 = iVar2;
      iVar3 = DAT_004a1eec;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x3c) = DAT_004a1eec;
        *(int *)(iVar2 + 0x40) = iVar3 + 0x2100;
        *(uint *)(iVar2 + 4) = param_2;
        *(uint *)(iVar2 + 8) = param_3;
        *(int *)(iVar2 + 0x44) = iVar3 + 0x4200;
        *(undefined4 *)(iVar2 + 0x48) = 0;
        if (param_2 < 0x401) {
          param_1[6] = 0x400;
        }
        if (param_2 < 0x201) {
          param_1[6] = 0x200;
        }
        if (param_2 < 0x101) {
          param_1[6] = 0x100;
        }
        param_1[2] = param_4;
        param_1[7] = 1;
        param_1[5] = param_5;
        iVar3 = FUN_002be9b8(param_4 << 2);
        param_1[1] = iVar3;
        if (iVar3 != 0) {
          iVar3 = param_1[6];
          uVar4 = 0;
          if (param_4 != 0) {
            do {
              iVar2 = FUN_002be9b8(iVar3 * (param_3 + (param_3 >> 1) + 1));
              *(int *)(param_1[1] + uVar4 * 4) = iVar2;
              if (iVar2 == 0) {
                return 0;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < param_4);
          }
          param_1[3] = param_4 - 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

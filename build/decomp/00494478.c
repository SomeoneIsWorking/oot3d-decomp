// OoT3D decomp @ 00494478  name=FUN_00494478  size=376

undefined4 FUN_00494478(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  if (param_2 < 3) {
    if (param_2 < 1) {
      param_2 = 1;
    }
  }
  else {
    param_2 = 2;
  }
  uVar1 = UnsignedSaturate(param_3,0xf);
  UnsignedDoesSaturate(param_3,0xf);
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 1;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  if (param_2 == 1) {
    iVar2 = FUN_002c17d8(uVar1,DAT_004945f0,param_1);
    if (iVar2 != 0) {
      *param_1 = iVar2;
      param_1[2] = 1;
LAB_0049458c:
      *(undefined1 *)((int)param_1 + 0x1a) = 0;
      param_1[4] = param_5;
      param_1[3] = param_4;
      *(undefined2 *)(param_1 + 8) = 0;
      *(undefined1 *)((int)param_1 + 0x17) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      iVar2 = DAT_004945f8;
      *(undefined1 *)((int)param_1 + 0x16) = 0;
      param_1[7] = 0;
      param_1[9] = iVar2;
      param_1[0xe] = iVar2;
      iVar3 = DAT_004945fc;
      *(undefined1 *)((int)param_1 + 0x22) = 0;
      param_1[0xf] = iVar3;
      param_1[0xc] = iVar3;
      param_1[0xd] = iVar3;
      param_1[0x11] = iVar2;
      param_1[0x12] = iVar3;
      param_1[0x13] = iVar3;
      param_1[10] = iVar2;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined1 *)((int)param_1 + 0x2d) = 0;
      *(undefined1 *)(param_1 + 5) = 1;
      return 1;
    }
  }
  else {
    iVar2 = 0;
    if (0 < param_2) {
LAB_004944f4:
      do {
        iVar3 = FUN_002c17d8(uVar1,DAT_004945f4,param_1);
        if (iVar3 == 0) {
          uVar4 = FUN_0030c6e0();
          iVar5 = FUN_00497e74(uVar4,uVar1);
          if (iVar5 != 0) goto LAB_004944f4;
          *(undefined1 *)((int)param_1 + 0x1b) = 1;
        }
        param_1[iVar2] = iVar3;
        iVar2 = iVar2 + 1;
        param_1[2] = param_1[2] + 1;
      } while (iVar2 < param_2);
    }
    if (*(char *)((int)param_1 + 0x1b) == '\0') goto LAB_0049458c;
    iVar2 = 0;
    if (0 < param_1[2]) {
      do {
        if (param_1[iVar2] != 0) {
          FUN_00308e24();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[2]);
    }
  }
  return 0;
}

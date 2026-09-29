// OoT3D decomp @ 002fa280  name=FUN_002fa280  size=368

int FUN_002fa280(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_1c;
  int local_18;

  iVar2 = FUN_002e1ef0();
  iVar4 = DAT_002fa3f0;
  if ((iVar2 != 0) && (iVar4 = 0, *(char *)(DAT_002fa3f4 + (int)param_1) == '\0')) {
    local_1c = 0;
    uVar3 = FUN_0030dd64(&local_1c,1);
    if (-1 < (int)uVar3) {
      *param_1 = local_1c;
      uVar3 = 0;
    }
    uVar5 = uVar3 >> 0x1b;
    if ((uVar3 & 0x80000000) != 0) {
      uVar5 = uVar5 - 0x20;
    }
    if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
      FUN_003351b4();
    }
    iVar4 = FUN_002e1d58(*param_1,2);
    if (iVar4 < 0) {
      if (*param_1 != 0) {
        software_interrupt(0x23);
        *param_1 = 0;
      }
      return iVar4;
    }
    local_18 = 0;
    iVar4 = FUN_0044a1d4(&local_18);
    if ((-1 < iVar4) && (local_18 != 0)) {
      param_1[1] = local_18;
      FUN_0044a1a8(0x2000);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1 + 2);
      } while (!bVar1);
      param_1[2] = 1;
      param_1[3] = 0;
      param_1[4] = 0;
      FUN_0044a9f0(param_1,param_2);
      if (param_2 == 0) {
        *(undefined1 *)(DAT_002fa3f8 + (int)param_1) = 1;
        param_1[5] = 0;
      }
      else {
        FUN_0044a5b0(DAT_002fa3fc);
        FUN_0044a8f0(DAT_002fa400);
        FUN_002fa240();
        FUN_002ea370();
        FUN_0044a6ec();
      }
      return 0;
    }
  }
  return iVar4;
}

// OoT3D decomp @ 003f4210  name=FUN_003f4210  size=476

void FUN_003f4210(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;

  cVar4 = '\0';
  iVar2 = *(int *)(DAT_003f43ec + param_2);
  if (*(short *)(param_1 + 0x1b2) == 0) {
    if (((DAT_003f43f0 < *(int *)(iVar2 + 0x2c)) && (*(uint *)(iVar2 + 0x28) < DAT_003f43f4)) &&
       (((int)*(uint *)(iVar2 + 0x28) < DAT_003f43f8 && (DAT_003f43fc < *(uint *)(iVar2 + 0x30)))))
    {
      cVar4 = *(uint *)(iVar2 + 0x30) < DAT_003f4400;
    }
  }
  else if ((((*(int *)(param_1 + 0x98) < DAT_003f4404) &&
            (iVar2 = FUN_0036e864(param_2,0x37,param_3,param_4,param_4), iVar2 != 0)) &&
           (sVar1 = *(short *)(param_2 + 0x104),
           ((sVar1 == 0x4f || sVar1 == 0x1a) || sVar1 == 0xe) || sVar1 == 0xf)) &&
          (*(short *)(param_1 + 0x1b4) == 0)) {
    cVar4 = '\x02';
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    sVar1 = *(short *)(param_1 + 0x1d0) + -1;
    *(short *)(param_1 + 0x1d0) = sVar1;
    if (sVar1 < 1) {
      *(undefined2 *)(param_1 + 0x1d0) = 0;
    }
  }
  else {
    if (cVar4 == '\x01') {
      if ((*(short *)(param_1 + 0x1ac) == 1) ||
         (*(int *)(param_1 + 0x1dc) == 0 && *(int *)(param_1 + 0x1d8) == 0)) {
        uVar3 = FUN_0036f848(*(undefined4 *)
                              (param_2 + *(short *)(DAT_003f4408 + param_2) * 4 + 0xa54),1);
        FUN_0036f7c0(uVar3,DAT_003f440c);
        FUN_0036f6b0(uVar3,5,0,0,0);
        FUN_0036f628(uVar3,200);
        *(undefined4 *)(param_1 + 0x1d8) = 1;
        *(undefined4 *)(param_1 + 0x1dc) = 0;
      }
    }
    else if (cVar4 != '\x02') {
      return;
    }
    sVar1 = *(short *)(param_1 + 0x1d0) + 1;
    *(short *)(param_1 + 0x1d0) = sVar1;
    if (0x5a < sVar1) {
      *(undefined2 *)(param_1 + 0x1d0) = 0x5a;
    }
    if (*(short *)(param_1 + 0x1ac) == 0) {
      *(undefined2 *)(param_1 + 0x1ac) = 300;
      uVar3 = DAT_003f4410;
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
      return;
    }
  }
  return;
}

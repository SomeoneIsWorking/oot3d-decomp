// OoT3D decomp @ 003eda98  name=FUN_003eda98  size=776

void FUN_003eda98(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r3;
  undefined4 uVar5;
  undefined4 extraout_r3_00;
  int iVar6;
  uint uVar7;
  float local_34;
  float local_30;
  float local_2c;

  uVar4 = DAT_003eddc0;
  uVar5 = DAT_003eddbc;
  uVar3 = DAT_003edda8;
  iVar6 = *(int *)(DAT_003edda0 + param_2);
  if (*(int *)(param_1 + 0x84) == -0x39e3c000) {
LAB_003edae4:
    FUN_00374428(param_1);
    return;
  }
  if (*(float *)(param_1 + 0x2c) < *(float *)(iVar6 + 0x2c) - DAT_003edda4) goto LAB_003edae4;
  sVar2 = *(short *)(param_1 + 0x1e4);
  if (sVar2 == 0) {
    if ((*(float *)(iVar6 + 0x2c) < *(float *)(param_1 + 0x2c)) &&
       ((((uVar7 = *(uint *)(iVar6 + 0x28), uVar7 < DAT_003eddac || ((int)uVar7 < DAT_003eddb0)) ||
         (*(uint *)(iVar6 + 0x30) < DAT_003eddb4)) || (DAT_003eddb8 < *(uint *)(iVar6 + 0x30))))) {
      FUN_00373500(uVar7,DAT_003eddc0,DAT_003eddbc,param_1 + 0x28);
      FUN_00373500(*(undefined4 *)(iVar6 + 0x30),uVar4,uVar5,param_1 + 0x30);
    }
LAB_003edba4:
    cVar1 = *(char *)(param_1 + 0x1e7);
    if ((cVar1 == '\0') || (*(char *)(param_1 + 0x1e7) = cVar1 + -1, cVar1 == '\x01')) {
      local_34 = (float)FUN_003738a8(uVar3);
      local_34 = local_34 + *(float *)(param_1 + 0x28);
      local_30 = (float)FUN_003738a8(uVar3);
      local_30 = local_30 + *(float *)(param_1 + 0x2c);
      local_2c = (float)FUN_003738a8(uVar3);
      local_2c = local_2c + *(float *)(param_1 + 0x30);
      sVar2 = *(short *)(param_2 + 0x104);
      uVar5 = extraout_r3;
      if ((sVar2 == 0xe || sVar2 == 0xf) || sVar2 == 0x1a) {
        uVar5 = 2;
      }
      if ((sVar2 != 0xe && sVar2 != 0xf) && sVar2 != 0x1a) {
        uVar5 = 1;
      }
      FUN_003580ec(param_2,param_1,&local_34,100,0,0,0xffffffff,uVar5);
      *(undefined1 *)(param_1 + 0x1e7) = 10;
    }
  }
  else if ((sVar2 != 1) && (sVar2 == 3)) goto LAB_003edba4;
  uVar5 = DAT_003eddc4;
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    return;
  }
  if (*(short *)(param_1 + 0x1e0) != 0) {
    return;
  }
  sVar2 = *(short *)(param_1 + 0x1e4);
  if (sVar2 != 0) {
    if (sVar2 == 1) goto LAB_003edc8c;
    if (sVar2 != 3) {
      FUN_0036f00c(*(undefined4 *)(param_1 + 0xcc),DAT_003eddc4,param_2,param_1,param_1 + 0x28,3,200
                   ,10,0);
      FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_003eddcc);
      FUN_00374428(param_1);
      return;
    }
  }
  FUN_0036fca8(param_1,param_2,5,2);
LAB_003edc8c:
  FUN_0036f00c(*(undefined4 *)(param_1 + 0xcc),uVar5,param_2,param_1,param_1 + 0x28,1,500,10,0);
  iVar6 = 0;
  do {
    local_34 = (float)FUN_003738a8(uVar3);
    local_34 = local_34 + *(float *)(param_1 + 0x28);
    local_30 = *(float *)(param_1 + 0x84);
    local_2c = (float)FUN_003738a8(uVar3);
    local_2c = local_2c + *(float *)(param_1 + 0x30);
    sVar2 = *(short *)(param_2 + 0x104);
    uVar5 = extraout_r3_00;
    if ((sVar2 == 0xe || sVar2 == 0xf) || sVar2 == 0x1a) {
      uVar5 = 2;
    }
    if ((sVar2 != 0xe && sVar2 != 0xf) && sVar2 != 0x1a) {
      uVar5 = 1;
    }
    FUN_003580ec(param_2,param_1,&local_34,300,0,0,0xffffffff,uVar5);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  *(undefined4 *)(param_1 + 0x1c0) = DAT_003eddc8;
  return;
}

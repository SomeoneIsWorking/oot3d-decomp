// OoT3D decomp @ 00465fec  name=FUN_00465fec  size=320

uint FUN_00465fec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  uVar2 = DAT_0046612c;
  if (*(char *)(param_1 + 3) == '\0') {
    iVar5 = 0;
    if (param_7 == 1) {
      iVar5 = DAT_00466130;
    }
    if (param_7 == 1) {
      param_6 = param_6 + iVar5;
    }
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1 + 0xd);
    } while (!bVar1);
    param_1[0xd] = 1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_34 = 4;
    local_30 = DAT_00466138;
    local_2c = DAT_0046613c;
    local_24 = 0;
    local_28 = DAT_00466140;
    uVar2 = FUN_0030dbf8(param_1 + 4,&local_34,DAT_00466134,&local_24,param_5 + param_4,param_6,
                         param_7,0);
    if ((uVar2 & 0x7e00000) != 0x600000) {
      uVar4 = uVar2 >> 0x1b;
      if ((uVar2 & 0x80000000) != 0) {
        uVar4 = uVar4 - 0x20;
      }
      if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
        FUN_003351b4(uVar2);
      }
    }
    iVar5 = DAT_00466144;
    if (-1 < (int)uVar2) {
      param_1[8] = 0;
      param_1[10] = param_2;
      param_1[0xb] = param_3;
      cVar3 = '\x01' - (char)param_7;
      param_1[9] = 0;
      if (1 < param_7) {
        cVar3 = '\0';
      }
      *(undefined1 *)(param_1 + 3) = 1;
      *(char *)(iVar5 + 0x1348) = cVar3;
      *(undefined1 *)((int)param_1 + 0x31) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 0xc) = (char)param_7;
      return uVar2;
    }
    param_1[0xf] = 0xffffffff;
  }
  return uVar2;
}

// OoT3D decomp @ 0016d908  name=FUN_0016d908  size=192

undefined4 FUN_0016d908(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];

  fVar3 = DAT_0016d9d0;
  uVar2 = DAT_0016d9cc;
  uVar1 = DAT_0016d9c8;
  if (param_2 == 10) {
    local_8c = DAT_0016d9c8;
    local_88 = DAT_0016d9cc;
    local_84 = DAT_0016d9cc;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x6fa),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003625f8(fVar4 * DAT_0016d9d0,auStack_50,&local_8c);
    local_8c = uVar2;
    local_88 = uVar2;
    local_84 = uVar1;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x6f8),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003625f8(fVar4 * fVar3,auStack_80,&local_8c);
    FUN_0036c174(param_3,param_3,auStack_80);
    FUN_0036c174(param_3,param_3,auStack_50);
  }
  return 0;
}

// OoT3D decomp @ 0040e1f0  name=FUN_0040e1f0  size=456

int FUN_0040e1f0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [4];
  int local_9c;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  byte local_1a;
  byte local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;

  if (param_2 != 0) {
    local_20 = 0;
    local_1f = 0;
    local_1e = 0;
    local_1d = 0;
    local_1c = 0;
    FUN_0030ab10(auStack_a8);
    iVar1 = FUN_0040d82c(auStack_a8,&local_2c,*param_3,param_3[1],param_3[2]);
    if ((iVar1 != 0) &&
       ((iVar1 = FUN_00304638(local_2c,uStack_28,param_4,param_5), iVar1 != 0 ||
        ((param_6 != 0 && (iVar1 = FUN_003045b8(local_2c,uStack_28,param_4,param_6), iVar1 != 0)))))
       ) {
      FUN_00304538(auStack_a8,iVar1);
      iVar1 = FUN_00304438(auStack_a8,auStack_a0,0);
      if (iVar1 != 0) {
        if (2 < local_9c) {
          local_9c = 2;
        }
        iVar1 = FUN_00309c74(local_9c,param_3[5],param_3[6],param_3[7]);
        fVar3 = DAT_0040e3b8;
        if (iVar1 != 0) {
          *(char *)(iVar1 + 0x126) = (char)param_3[1];
          *(undefined1 *)(iVar1 + 0x127) = local_1b;
          fVar2 = (float)VectorSignedToFloat((uint)local_1a * param_3[2] * param_3[2],
                                             (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(iVar1 + 0x100) = fVar2 * fVar3;
          *(undefined4 *)(iVar1 + 0x10c) = local_24;
          FUN_00309f90(iVar1 + 0x90,local_20);
          FUN_00309efc(iVar1 + 0x90,local_1d);
          FUN_00309f1c(iVar1 + 0x90,local_1f);
          *(undefined1 *)(iVar1 + 0xa8) = local_1e;
          FUN_0030a074(iVar1 + 0x90,local_1c);
          fVar3 = (float)VectorSignedToFloat(param_3[4] + (uint)local_19 + -0x40,
                                             (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(iVar1 + 0x104) = fVar3 * DAT_0040e3bc;
          *(undefined1 *)(iVar1 + 0x128) = local_17;
          *(undefined1 *)(iVar1 + 0xca) = local_18;
          *(undefined1 *)(iVar1 + 0x129) = local_16;
          FUN_00309be8(iVar1,auStack_a0,param_3[3],0);
          return iVar1;
        }
      }
    }
  }
  return 0;
}

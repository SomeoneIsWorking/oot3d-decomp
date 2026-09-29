// OoT3D decomp @ 0035353c  name=FUN_0035353c  size=324

int FUN_0035353c(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;

  uVar3 = (uint)(short)((ushort)param_3 & 0x8000);
  iVar2 = 0;
  if ((param_3 & 0xff) == 0x12 && (param_3 & 0x4000) == 0) {
    iVar2 = z_actor_003738d0(*param_2,(float)param_2[1] + DAT_00353680,param_2[2],param_1 + 0x208c,
                             param_1,0x18,0,0,0,2,1);
    FUN_0035e4f4(param_1,param_2,DAT_00353684,1,1,0x28);
  }
  else {
    uVar1 = FUN_0035e414(param_3 & 0xff);
    if (((uVar1 != 0xffffffff) &&
        (iVar2 = z_actor_003738d0(*param_2,param_2[1],param_2[2],param_1 + 0x208c,param_1,0x15,0,0,0
                                  ,uVar1 | uVar3 | param_3 & 0x3f00,1), uVar4 = DAT_00353688,
        iVar2 != 0)) && (uVar3 == 0)) {
      *(undefined4 *)(iVar2 + 100) = DAT_00353688;
      *(undefined4 *)(iVar2 + 0x6c) = uVar4;
      if ((param_3 & 0x4000) == 0) {
        uVar4 = DAT_0035368c;
      }
      *(undefined4 *)(iVar2 + 0x70) = uVar4;
      fVar5 = (float)FUN_003738a8(DAT_00353690);
      *(short *)(iVar2 + 0x36) = (short)(int)fVar5;
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
    }
  }
  return iVar2;
}

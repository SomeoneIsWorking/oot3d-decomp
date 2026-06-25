// OoT3D decomp @ 0036df58  name=FUN_0036df58  size=400

int FUN_0036df58(int param_1,undefined4 *param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar4 = (uint)(short)((ushort)param_3 & 0x8000);
  uVar2 = param_3 & 0x3fff;
  iVar3 = 0;
  if ((param_3 & 0xff) == 0x12 && (param_3 & 0x4000) == 0) {
    iVar3 = FUN_003738d0(*param_2,(float)param_2[1] + DAT_0036e0e8,param_2[2],param_1 + 0x208c,
                         param_1,0x18,0,0,0,2,1);
    FUN_0035e4f4(param_1,param_2,DAT_0036e0ec,1,1,0x28);
  }
  else {
    if (uVar4 == 0) {
      uVar2 = FUN_0035e414();
    }
    if (((uVar2 != 0xffffffff) &&
        (iVar3 = FUN_003738d0(*param_2,param_2[1],param_2[2],param_1 + 0x208c,param_1,0x15,0,0,0,
                              uVar2 | uVar4 | param_3 & 0x3f00,1), iVar3 != 0)) && (uVar4 == 0)) {
      uVar5 = DAT_0036e0f0;
      if ((param_3 & 0x4000) == 0) {
        uVar5 = DAT_0036e0f4;
      }
      *(undefined4 *)(iVar3 + 100) = uVar5;
      *(undefined4 *)(iVar3 + 0x6c) = DAT_0036e0f8;
      *(undefined4 *)(iVar3 + 0x70) = DAT_0036e0fc;
      fVar6 = (float)FUN_003738a8(DAT_0036e100);
      uVar5 = DAT_0036e104;
      *(short *)(iVar3 + 0x36) = (short)(int)fVar6;
      FUN_0037572c(uVar5,iVar3);
      *(undefined4 *)(iVar3 + 0x1a4) = DAT_0036e108;
      *(undefined2 *)(iVar3 + 0x1b2) = 0xdc;
      sVar1 = *(short *)(iVar3 + 0x1c);
      if ((sVar1 != 0x11 && sVar1 != 6) && sVar1 != 7) {
        *(undefined *)(iVar3 + 3) = 0xff;
      }
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x10;
    }
  }
  return iVar3;
}


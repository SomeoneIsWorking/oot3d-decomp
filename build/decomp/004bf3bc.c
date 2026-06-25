// OoT3D decomp @ 004bf3bc  name=FUN_004bf3bc  size=500

void FUN_004bf3bc(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint local_28;
  float local_24;
  
  FUN_0034b288(*(undefined4 *)(param_1 + 0x221c),param_2,param_1,*(undefined4 *)(param_1 + 0x29c8));
  FUN_0034b17c(param_1);
  iVar3 = FUN_002c3d18(param_2,param_1,DAT_004bf5b0,1);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_00358bf4(param_2,param_1,*(undefined4 *)(param_1 + 0x29c8)), fVar1 = DAT_004bf5b4,
     iVar3 == 0)) {
    FUN_0036b3f4(DAT_004bf5b4,param_1,&local_24,&local_28,param_2);
    bVar5 = local_24 == fVar1;
    if (!bVar5) {
      bVar5 = *(char *)(param_1 + 0x1a7) == '\x01';
    }
    if (bVar5) {
      FUN_002bdd68(param_2,param_1);
    }
    else {
      iVar3 = FUN_00349574(param_1);
      uVar2 = DAT_004bf5c0;
      if ((iVar3 == 0) && ((*(uint *)(DAT_004bf5b8 + param_1) & DAT_004bf5bc) == 0)) {
        FUN_004c44dc(param_2,param_1,(int)(short)local_28);
      }
      else {
        if ((int)(short)(*(short *)(param_1 + 0x2220) - (short)local_28) + 0x6000U < 0xc001) {
          iVar3 = FUN_002bcd38(param_1,&local_24,&local_28,param_2);
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              iVar3 = 0x3f;
            }
            else if ((short)(*(short *)(param_1 + 0xbe) - (short)local_28) < 1) {
              iVar3 = 0x3d;
            }
            else {
              iVar3 = 0x3c;
            }
          }
          else {
            iVar3 = 0x3b;
          }
        }
        else {
          iVar3 = 0x34;
          iVar4 = FUN_003705a0(fVar1,DAT_004bf5c0,param_1 + 0x221c);
          if (iVar4 == 0) {
            local_24 = fVar1;
            local_28 = (uint)*(ushort *)(param_1 + 0x2220);
          }
          else {
            *(short *)(param_1 + 0x2220) = (short)local_28;
          }
        }
        if (*(int *)(param_1 + 0x284) != iVar3) {
          FUN_00360190(uVar2,fVar1,fVar1,DAT_004bf5c4,param_1 + 0x254,param_2,iVar3,0);
        }
      }
    }
    FUN_0034ad70(local_24,param_1,param_1 + 0x221c,(int)(short)local_28);
    FUN_00360a1c(param_1,DAT_004bf5c8);
  }
  return;
}


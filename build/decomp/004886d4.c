// OoT3D decomp @ 004886d4  name=FUN_004886d4  size=676

void FUN_004886d4(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_0036b4ec(param_1 + 0x254);
  iVar4 = iRam00488984;
  if (iVar3 == 0) {
    if (*(short *)(param_1 + 0x2238) != 0) {
      if (*(short *)(param_2 + 0x2b7e) == 4) {
        FUN_0036c5bc(param_2,0);
        FUN_0036ae48();
        iVar4 = *(int *)(param_1 + 0x172c);
        if ((iVar4 == 0) || (iVar4 != *(int *)(param_1 + 0x1740))) {
          sVar1 = *(short *)(iRam0048897c + param_1);
          if (sVar1 < 0) {
            *(int *)(param_1 + 0x172c) = *(int *)(param_1 + 0x1724);
            *(short *)(*(int *)(param_1 + 0x1724) + 0x116) = -sVar1;
            FUN_00336bbc(param_2,*(undefined4 *)(param_1 + 0x172c));
          }
          else {
            iVar4 = FUN_003518dc(param_1,param_2);
            if (iVar4 == 0) {
              FUN_0033f7ac(param_1,0x7f,param_2);
            }
          }
        }
        else {
          FUN_00336bbc(param_2,iVar4);
        }
        *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xfc7fffff;
        *(undefined4 *)(param_1 + 0x1740) = 0;
      }
      else if (*(short *)(param_2 + 0x2b7e) == 2) {
        *(undefined2 *)(iRam00488984 + 0x1c) =
             *(undefined2 *)(iRam00488980 + (uint)*(ushort *)(param_2 + 0x2b7c) * 2);
        *(undefined2 *)(iVar4 + 0x1a) = 0x5ff;
        *(char *)(iVar4 + 0x1f) = (char)*(undefined2 *)(param_2 + 0x2b7c);
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xdfffffff;
        iVar3 = iRam00488988;
        *(undefined *)(param_1 + 0x12bc) = 0;
        iVar5 = *(int *)(iVar3 + param_2);
        iVar3 = FUN_0035db20(param_2,iVar5);
        uVar2 = uRam0048898c;
        if (iVar3 == 0) {
          FUN_0036b0fc(param_2,iVar5);
          FUN_0036b02c(param_2,iVar5);
          FUN_0036055c(param_2,iVar5,uRam00488990,0);
          *(undefined *)(iVar5 + 0x12bc) = 8;
          *(undefined4 *)(iVar5 + 0x12c0) = 0;
          *(undefined4 *)(iVar5 + 0x6c) = uVar2;
          *(undefined4 *)(iVar5 + 0x221c) = uVar2;
          *(undefined *)(iVar5 + 0x1749) = 0;
          iVar3 = iRam00488998;
          *(undefined4 *)(iRam00488998 + 0xcc) = uRam00488994;
          *(undefined *)(iVar3 + 0xd4) = 0;
        }
        *(ushort *)(param_2 + 0x4f8) = *(ushort *)(param_2 + 0x4f8) & 0xfff7;
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x30000000;
        *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x8000000;
        iVar3 = FUN_003738d0(uVar2,uVar2,uVar2,param_2 + 0x208c,param_2,0x8c,0,0,0,0xf,1);
        if (iVar3 == 0) {
          func_0x0033de98(param_2);
        }
        *(undefined4 *)(iVar4 + 0x58) = 0xff;
        *(undefined *)(iVar4 + 0x6e) = 0xff;
        return;
      }
    }
  }
  else {
    FUN_003404a8(uRam00488978,param_1 + 0x254,param_2,0x7d);
    *(undefined2 *)(param_1 + 0x2238) = 1;
    if ((*(uint *)(param_1 + 0x1714) & 0x2800000) == 0) {
      *(undefined2 *)(param_2 + 0x2b9e) = 0;
      FUN_00343f0c(param_2,param_2 + 0x224c);
      FUN_003438a4(param_2,1);
      return;
    }
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x1000000;
  }
  return;
}

